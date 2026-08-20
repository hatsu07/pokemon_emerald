	@ data/maps/LittlerootTown/scripts.inc:963 LittlerootTown_Text_BirchSpendsDaysInLab
	.globl gText_Rom_1E4560
gText_Rom_1E4560: @ 0x081E4560
	.string "ずーっと けんきゅうしつに こもって\nしらべものを しているかと おもえば\lとつぜん のやまに とびだしていく……\pオダマキはかせって いったい\nいつ うちに かえっているんだろう?{EOS}"
	.if (. - gText_Rom_1E4560) > 0x5c
	.error "gText_Rom_1E4560 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4560) < 0x5c
	.space 0x5c - (. - gText_Rom_1E4560)
	.endif
