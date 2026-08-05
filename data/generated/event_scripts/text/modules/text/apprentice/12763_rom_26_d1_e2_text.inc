	@ data/text/apprentice.inc:67 gText_ApprenticeWhichLevelMode1
	.globl gText_Rom_26D1E2
gText_Rom_26D1E2: @ 0x0826D1E2
	.string "わーい やった!\nじゃあねー はじめに ききたい ことはね\lバトルタワーの こと!\pレベル50と オープンレベルの へや\nどっちが ボクに ピッタリ かなあ?"
	.byte EOS
	.if (. - gText_Rom_26D1E2) > 0x50
	.error "gText_Rom_26D1E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D1E2) < 0x50
	.space 0x50 - (. - gText_Rom_26D1E2)
	.endif
