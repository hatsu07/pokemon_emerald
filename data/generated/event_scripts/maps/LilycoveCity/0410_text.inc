	@ data/maps/LilycoveCity/scripts.inc:627 LilycoveCity_Text_ImArtDealer
	.globl gText_Rom_1E1021
gText_Rom_1E1021: @ 0x081E1021
	.string "わたしは ガショウ です!\pいや そういう なまえ なのではなく\nかちのある えを かったり うったりする\lしょくぎょうの なまえ なんです!\pこのまちの びじゅつかんに すばらしい\nめいが が あると きいたの ですが……{EOS}"
	.if (. - gText_Rom_1E1021) > 0x71
	.error "gText_Rom_1E1021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1021) < 0x71
	.space 0x71 - (. - gText_Rom_1E1021)
	.endif
