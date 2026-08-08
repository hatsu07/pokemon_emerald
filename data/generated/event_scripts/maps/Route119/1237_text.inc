	@ data/maps/Route119/scripts.inc:497 Route119_Text_MayExplainFly
	.globl gText_Rom_1ED387
gText_Rom_1ED387: @ 0x081ED387
	.string "ハルカ『そらをとぶを つかえば\nいちど いった まちなら いっしゅんで\lとんでいく ことが できるの!\pでも そらをとぶを つかうには\nヒワマキの ジムバッジが いるのよ\lこれ だいじだから わすれないでね!\pたまには そらをとぶで\nミシロに かえるのも いいんじゃない?\p{PLAYER}{KUN}の おかあさん\nしんぱい してるかも しれないし……\pじゃあ\nまた どこかで あおうね!$"
	.if (. - gText_Rom_1ED387) > 0xba
	.error "gText_Rom_1ED387 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED387) < 0xba
	.space 0xba - (. - gText_Rom_1ED387)
	.endif
