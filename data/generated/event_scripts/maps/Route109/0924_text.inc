	@ data/maps/Route109/scripts.inc:482 Route109_Text_BrineySailToDewfordQuestion
	.globl gText_Rom_1E8B67
gText_Rom_1E8B67: @ 0x081E8B67
	.string "ハギ『にもつを とどけないのかい?\pそれとも ムロに もどるのかね?{EOS}"
	.if (. - gText_Rom_1E8B67) > 0x23
	.error "gText_Rom_1E8B67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8B67) < 0x23
	.space 0x23 - (. - gText_Rom_1E8B67)
	.endif
