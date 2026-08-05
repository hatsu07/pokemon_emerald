	@ data/text/trainers.inc:208 Route104_Text_IvanPostBattle
	.globl gText_Rom_259E6D
gText_Rom_259E6D: @ 0x08259E6D
	.string "つりに むちゅうに なってて\nポケモン そだてるのを わすれてたよ……"
	.byte EOS
	.if (. - gText_Rom_259E6D) > 0x24
	.error "gText_Rom_259E6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259E6D) < 0x24
	.space 0x24 - (. - gText_Rom_259E6D)
	.endif
