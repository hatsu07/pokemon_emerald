	@ data/maps/MossdeepCity/scripts.inc:354 MossdeepCity_Text_SpaceCenterSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E1BD5
gText_Rom_1E1BD5: @ 0x081E1BD5
	.string "「トクサネ うちゅうセンター」\nうちゅうに いちばん ちかい ばしょ$"
	.if (. - gText_Rom_1E1BD5) != 0x23
	.error "gText_Rom_1E1BD5 must retain its original byte length"
	.endif
