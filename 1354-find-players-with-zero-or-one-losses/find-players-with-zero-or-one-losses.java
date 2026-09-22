import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        // Array to store the number of losses for each player. 
        // -1 means the player hasn't played any matches.
        int[] losses = new int[100001];
        Arrays.fill(losses, -1);
        
        // Count losses and mark players who have played
        for (int[] match : matches) {
            int winner = match[0];
            int loser = match[1];
            
            // If the winner hasn't been recorded yet, mark them with 0 losses
            if (losses[winner] == -1) {
                losses[winner] = 0;
            }
            
            // If the loser hasn't been recorded, mark them with 1 loss.
            // Otherwise, increment their loss count.
            if (losses[loser] == -1) {
                losses[loser] = 1;
            } else {
                losses[loser]++;
            }
        }
        
        List<Integer> zeroLosses = new ArrayList<>();
        List<Integer> oneLoss = new ArrayList<>();
        
        // Iterate through the array to populate our result lists.
        // Because we iterate from 1 to 100000, the IDs are naturally in increasing order.
        for (int i = 1; i <= 100000; i++) {
            if (losses[i] == 0) {
                zeroLosses.add(i);
            } else if (losses[i] == 1) {
                oneLoss.add(i);
            }
        }
        
        return Arrays.asList(zeroLosses, oneLoss);
    }
}