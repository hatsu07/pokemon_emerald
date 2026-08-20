	@ data/maps/PetalburgWoods/scripts.inc:331 PetalburgWoods_Text_HandOverThosePapers
	.globl gText_Rom_21464B
gText_Rom_21464B: @ 0x0821464B
	.string "やい! デボンの けんきゅういん!\pその しょるいを こっちに よこしやがれ!{EOS}"
	.if (. - gText_Rom_21464B) > 0x28
	.error "gText_Rom_21464B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21464B) < 0x28
	.space 0x28 - (. - gText_Rom_21464B)
	.endif
