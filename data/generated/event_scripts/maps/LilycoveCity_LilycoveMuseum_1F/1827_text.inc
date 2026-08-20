	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:221 LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings
	.globl gText_Rom_2060D2
gText_Rom_2060D2: @ 0x082060D2
	.string "この びじゅつかんに あたらしい えが\nはいったって きいたから\lさっそく みにきて みたの!\pあたらしい えは 2かい かな?{EOS}"
	.if (. - gText_Rom_2060D2) > 0x41
	.error "gText_Rom_2060D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2060D2) < 0x41
	.space 0x41 - (. - gText_Rom_2060D2)
	.endif
