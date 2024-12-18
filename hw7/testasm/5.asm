	      INT   0, 28
	      SUP   0, main
	      RET   0, 0
fibonacci:
	      INT   0, 32
	      LDA   1, 16
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
	      LDA   1, 20
	     LITI   0, 1
	      STX   0, 1
	      POP   0, 1
	      LOD   1, 12
	     LITI   0, 0
	     LSSI   0, 0
	      JPC   0, L1
	      LDA   1, -4
	     LITI   0, 1
	   MINUSI   0, 0
	      STO   0, 1
	      RET   0, 0
	      JMP   0, L2
L1:
	      LOD   1, 12
	     LITI   0, 0
	     EQLI   0, 0
	      JPC   0, L3
	      LDA   1, -4
	      LOD   1, 16
	      STO   0, 1
	      RET   0, 0
	      JMP   0, L4
L3:
	      LOD   1, 12
	     LITI   0, 1
	     EQLI   0, 0
	      JPC   0, L5
	      LDA   1, -4
	      LOD   1, 20
	      STO   0, 1
	      RET   0, 0
	      JMP   0, L6
L5:
	      LDA   1, 24
	     LITI   0, 2
	      STX   0, 1
	      POP   0, 1
L8:
	      LOD   1, 24
	      LOD   1, 12
	     LEQI   0, 0
	      JPC   0, L9
	      LOD   1, 24
	     LITI   0, 2
	      MOD   0, 0
	      JPC   0, L10
	      LDA   1, 20
	      LOD   1, 20
	      LOD   1, 16
	     ADDI   0, 0
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L11
L10:
	      LDA   1, 16
	      LOD   1, 16
	      LOD   1, 20
	     ADDI   0, 0
	      STX   0, 1
	      POP   0, 1
L11:
	      LOD   1, 24
	      LOD   1, 12
	     EQLI   0, 0
	      JPC   0, L12
	      LOD   1, 16
	      LOD   1, 20
	     GTRI   0, 0
	      JPC   0, L13
	      LDA   1, -4
	      LOD   1, 16
	      STO   0, 1
	      RET   0, 0
	      JMP   0, L14
L13:
	      LDA   1, -4
	      LOD   1, 20
	      STO   0, 1
	      RET   0, 0
L14:
L12:
L7:
	      LOD   1, 24
	      LDA   1, 24
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L8
L9:
L6:
L4:
L2:
	      RET   0, 0
main:
	      INT   0, 16
	      LDA   1, 12
	     LITI   0, 1
	      STX   0, 1
	      POP   0, 1
L16:
	      LOD   1, 12
	     LITI   0, 10
	     LEQI   0, 0
	      JPC   0, L17
	      INT   0, 12
	      LDA   0, 12
	      LOD   1, 12
	      INT   0, 16
	      LOD   1, 12
	      POP   0, 4
	     ADDR   0, fibonacci
	      CAL   0, 0
	      POP   0, 6
	     ADDR   0, printf
	      CAL   0, 0
L15:
	      LOD   1, 12
	      LDA   1, 12
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L16
L17:
	      RET   0, 0
.literal    12  "F(%d) = %d\n"
