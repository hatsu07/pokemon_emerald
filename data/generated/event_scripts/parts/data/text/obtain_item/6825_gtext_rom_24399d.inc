	@ data/text/obtain_item.inc:1 gText_ObtainedTheItem (+1 aliases)
	.globl gText_Rom_24399D
gText_Rom_24399D: @ 0x0824399D
	.string "{STR_VAR_2}を てにいれた!$"
	.if (. - gText_Rom_24399D) > 0xb
	.error "gText_Rom_24399D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24399D) < 0xb
	.space 0xb - (. - gText_Rom_24399D)
	.endif
