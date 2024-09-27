import java.util.*;

class Card {
    String symbol;
    int number;
    Card(String str, int num){
        this.symbol=str;
        this.number=num;
    }
}

public class Exp5 {

    public static void main(String[] args) {
        System.out.println("👉Name : Ashutosh Dwivedi👈");
        System.out.println("⚡️UID : 21BCS2617⚡️");
        List<Card> cards=collectCards();
        Map<String, List<Card>> deck = groupCards(cards);
        printDetails(deck);
    }

    public static List<Card> collectCards(){
        List<Card> cards = new ArrayList<>();
        Scanner sc=new Scanner(System.in);
        System.out.println("Number of cards: ");
        int n=sc.nextInt();
        sc.nextLine();
        Set<String> symbolsSet = new HashSet<>();
        for (int i = 1; i <= n; i++) {
            System.out.println("Enter a card :");
            String symbol = sc.nextLine().trim();
            if (symbolsSet.contains(symbol)) {
                sc.nextInt();
                sc.nextLine();
                continue;
            }
            symbolsSet.add(symbol);
            int number = sc.nextInt();
            sc.nextLine();
            cards.add(new Card(symbol, number));
        }
        sc.close();
        return cards;
    }

    public static Map<String, List<Card>> groupCards(List<Card> cards) {
        Map<String, List<Card>> groupedCards = new HashMap<>();
        for (Card card : cards) {
            groupedCards.computeIfAbsent(card.symbol, k -> new ArrayList<>()).add(card);
        }
        return groupedCards;
    }

    public static void printDetails(Map<String, List<Card>> groupedCards) {
        List<String> symbols = new ArrayList<>(groupedCards.keySet());
        Collections.sort(symbols);

        System.out.println("Cards in Set are:");
        for (String symbol : symbols) {
            List<Card> cards = groupedCards.get(symbol);
            Collections.sort(cards, Comparator.comparingInt(card -> card.number));
            System.out.println(cards.get(0).symbol + " " + cards.get(0).number);
        }
    }
}