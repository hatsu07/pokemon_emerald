	@ data/maps/BattleFrontier_Lounge7/scripts.inc:337 BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful
	.globl gText_Rom_239F73
gText_Rom_239F73: @ 0x08239F73
	.string "わたしが まだ たんぱんこぞう だったころ\nつよく うつくしい かのじょ たちは\lトレーナー みんなの アイドル でした\pいまも その わざの キレは\nおとろえる どころか\lますます みがきが かかっている ようです\pだが…… なぜか こう おもうのです……\pじかんと いうものは\nざんこくな もの ですね……"
	.byte EOS
	.if (. - gText_Rom_239F73) > 0x9c
	.error "gText_Rom_239F73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239F73) < 0x9c
	.space 0x9c - (. - gText_Rom_239F73)
	.endif
