	@ data/text/berries.inc:19 Route111_Text_WateredPlantsEveryDayTakeBerry
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26388C
gText_Rom_26388C: @ 0x0826388C
	.string "いつも みずを あげてたら\nたくさん はなが さいたんだ\pそしたら きのみも たくさん できた!\pはい!\nこれ あげる$"
	.if (. - gText_Rom_26388C) != 0x3c
	.error "gText_Rom_26388C must retain its original byte length"
	.endif
