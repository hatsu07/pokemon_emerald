	@ data/text/match_call.inc:853 MatchCall_Text_Scott5
	.globl gText_Rom_26BBA2
gText_Rom_26BBA2: @ 0x0826BBA2
	.string "エニシダ『おおー {PLAYER}{KUN}\pあのね うみのそこにも すごうでの\nトレーナーが いたり するのかな?\pでも たしかめに いこうにも\nわたしは およげないし\lポケモンも もってないし……"
	.byte EOS
	.if (. - gText_Rom_26BBA2) > 0x5c
	.error "gText_Rom_26BBA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BBA2) < 0x5c
	.space 0x5c - (. - gText_Rom_26BBA2)
	.endif
