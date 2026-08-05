	@ data/text/apprentice.inc:103 gText_ApprenticeWhichLevelMode4
	.globl gText_Rom_26D759
gText_Rom_26D759: @ 0x0826D759
	.string "うん じゃあ おねがいね\nさっそく きめて ほしいことが あるから\pレベル50と オープンレベルの へやが\nバトルタワーに あるじゃない?\l{PLAYER}{KUN}は わたしには\lどっちが いいと おもう?"
	.byte EOS
	.if (. - gText_Rom_26D759) > 0x60
	.error "gText_Rom_26D759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D759) < 0x60
	.space 0x60 - (. - gText_Rom_26D759)
	.endif
