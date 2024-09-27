import streamlit as st
import pickle
import re
from nltk.corpus import stopwords
from nltk.stem.porter import PorterStemmer
from sklearn.feature_extraction.text import TfidfVectorizer

port_stem = PorterStemmer()
vectorization = TfidfVectorizer()
vector_form = pickle.load(open('vector.pkl', 'rb'))
load_model = pickle.load(open('model.pkl', 'rb'))

def stemming(content):
    con = re.sub('[^a-zA-Z]', ' ', content)
    con = con.lower()
    con = con.split()
    con = [port_stem.stem(word) for word in con if not word in stopwords.words('english')]
    con = ' '.join(con)
    return con

def fake_news(news):
    news = stemming(news)
    input_data = [news]
    vector_form1 = vector_form.transform(input_data)
    prediction = load_model.predict(vector_form1)
    return prediction

if __name__ == '__main__':
    st.set_page_config(page_title='Fake News Detection', page_icon=':newspaper:')
    st.title('Fake News Detection')
    
    st.sidebar.title("Navigation")
    option = st.sidebar.radio("Select Option", ["About", "How it works", "Prediction"])


    if option == "About":
        st.header("About")
        st.write("This application is developed by Ashutosh. Its primary purpose is to detect fake news.")

    if option == "How it works":
        st.header("How it works")
        st.write("Our model uses Natural Language Processing techniques to analyze the text and determine its reliability.")
        st.write("Suppose if the input news is fake so it will display as 'The News is Unreliable and vice versa'")

    if option == "Prediction":
        st.header("Prediction")
        st.subheader("Enter the News Content")
        sentence = st.text_area("Enter your news content here", "", height=200)
        predict_btn = st.button("Predict")

        if predict_btn:
            prediction_class = fake_news(sentence)

            if prediction_class == [0]:
                st.success('The News you entered is Reliable')
            if prediction_class == [1]:
                st.warning('The News you entered is Unreliable')


    st.sidebar.text("Contact us at mini@project.com")
