import java.util.*;

class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        Map<Integer, Integer> lost_m = new HashMap<>(); 
        
        // Count losses
        for(int i = 0; i < matches.length; i++){
            int loser = matches[i][1]; 
            lost_m.put(loser, lost_m.getOrDefault(loser, 0) + 1); 
        }
        
        List<Integer> not_lost = new ArrayList<>(); 
        List<Integer> lost_once = new ArrayList<>(); 
        
        for(int i = 0; i < matches.length; i++){
            int loser = matches[i][1]; 
            int winner = matches[i][0]; 

            // If winner is not in the map, add to not_lost and mark in map
            if(!lost_m.containsKey(winner)){
                not_lost.add(winner); 
                lost_m.put(winner, 2); 
            }
            // If loser has exactly 1 loss, add to lost_once
            if(lost_m.get(loser) == 1){
                lost_once.add(loser); 
            } 
        }
        
        Collections.sort(lost_once);
        Collections.sort(not_lost);
        
        return Arrays.asList(not_lost, lost_once); 
    }
}