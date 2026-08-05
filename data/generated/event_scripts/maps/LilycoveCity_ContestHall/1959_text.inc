	@ data/maps/LilycoveCity_ContestHall/scripts.inc:391 LilycoveCity_ContestHall_Text_NeverWonBattleButContest
	.globl gText_Rom_2080AB
gText_Rom_2080AB: @ 0x082080AB
	.string "わたしの ポケモンって しょうぶだと\n1ども かった こと ないけど\lコンテストは おとくい なのよ！$"
	.if (. - gText_Rom_2080AB) > 0x34
	.error "gText_Rom_2080AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2080AB) < 0x34
	.space 0x34 - (. - gText_Rom_2080AB)
	.endif
