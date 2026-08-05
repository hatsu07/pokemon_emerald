	@ data/text/apprentice.inc:493 gText_ApprenticeWhichMonFirst2
	.globl gText_Rom_27026B
gText_Rom_27026B: @ 0x0827026B
	.string "{PLAYER}さん こんにちは!\nしょうぶのときって さいしょに\pどの ポケモンを だすのかが\nとても だいじな きが するんです!\pぼくが もってる ポケモンの なかで\nどの ポケモンを\lさいしょに だすと いいでしょうか?"
	.byte EOS
	.if (. - gText_Rom_27026B) > 0x6d
	.error "gText_Rom_27026B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27026B) < 0x6d
	.space 0x6d - (. - gText_Rom_27026B)
	.endif
