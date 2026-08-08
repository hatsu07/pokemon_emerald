	@ data/maps/MagmaHideout_3F_1R/scripts.inc:26 MagmaHideout_3F_1R_Text_Grunt16Intro (+1 aliases)
	.globl gText_Rom_21C6FB
gText_Rom_21C6FB: @ 0x0821C6FB
	.string "アタシたちは リーダーが めざしている\nすばらしい もくてきを\lじつげん するために あつまったの!\pアクアだん だろうが\nとおりすがりの おこさま だろうが\lじゃまを するなら ゆるさないわ!"
	.byte EOS
	.if (. - gText_Rom_21C6FB) > 0x62
	.error "gText_Rom_21C6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C6FB) < 0x62
	.space 0x62 - (. - gText_Rom_21C6FB)
	.endif
