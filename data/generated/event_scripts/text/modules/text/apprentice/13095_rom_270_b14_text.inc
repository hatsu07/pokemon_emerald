	@ data/text/apprentice.inc:559 gText_ApprenticeWhichMonFirst13
	.globl gText_Rom_270B14
gText_Rom_270B14: @ 0x08270B14
	.string "うう {PLAYER}{KUN} ……\nおなか いたくってさ ちょっとまって……\p……ああ なおってきた……\pどの ポケモンを しょうぶのとき\nさいしょに だすか なやんで いて\lなやみ すぎちゃったん だよね きっと!\pというわけ だからさ\nかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\nどれを さいしょに だせば\lかてると おもうかい?"
	.byte EOS
	.if (. - gText_Rom_270B14) > 0xa9
	.error "gText_Rom_270B14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270B14) < 0xa9
	.space 0xa9 - (. - gText_Rom_270B14)
	.endif
