	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:182 LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205EDD
gText_Rom_205EDD: @ 0x08205EDD
	.string "みたことも ないような ふしぎな\nけしきが えがかれている{EOS}"
	.if (. - gText_Rom_205EDD) != 0x1e
	.error "gText_Rom_205EDD must retain its original byte length"
	.endif
