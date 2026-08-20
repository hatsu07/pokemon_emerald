	@ data/maps/PetalburgWoods/scripts.inc:420 PetalburgWoods_Text_IveBeenTrainingHard
	.globl gText_Rom_21497A
gText_Rom_21497A: @ 0x0821497A
	.string "つよい ポケモン もってると\nにんきものに なれるだろ?\lだから がんばって そだててるのさ!{EOS}"
	.if (. - gText_Rom_21497A) > 0x30
	.error "gText_Rom_21497A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21497A) < 0x30
	.space 0x30 - (. - gText_Rom_21497A)
	.endif
