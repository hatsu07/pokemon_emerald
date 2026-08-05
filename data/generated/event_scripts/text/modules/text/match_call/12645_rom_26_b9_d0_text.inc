	@ data/text/match_call.inc:841 MatchCall_Text_Scott1
	.globl gText_Rom_26B9D0
gText_Rom_26B9D0: @ 0x0826B9D0
	.string "エニシダ『どーも どーも {PLAYER}{KUN}\pやまでも うみでも くさむらでも\nどこにだって ポケモンが いるように\lトレーナーさん というのも\lいろんな ところに いるもんだねえ\pおかげで わたしも\nアッチいったり コッチいったり\lいそがしくて しょうがないよ!"
	.byte EOS
	.if (. - gText_Rom_26B9D0) > 0x80
	.error "gText_Rom_26B9D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B9D0) < 0x80
	.space 0x80 - (. - gText_Rom_26B9D0)
	.endif
