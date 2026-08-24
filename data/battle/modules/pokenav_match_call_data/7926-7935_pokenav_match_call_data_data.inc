	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_5F7393
gText_Rom_5F7393: @ 0x085F7393
	.string "ダイゴ{EOS}"
	.if (. - gText_Rom_5F7393) > 0x4
	.error "gText_Rom_5F7393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7393) < 0x4
	.space 0x4 - (. - gText_Rom_5F7393)
	.endif
	@ src/pokenav_match_call_data.c:274 gText_MayBrendanMatchCallDesc
	.globl gText_MayBrendanMatchCallDesc
gText_MayBrendanMatchCallDesc: @ 0x085F7397
	.string "おとなりさん{EOS}"
	.if (. - gText_MayBrendanMatchCallDesc) > 0x7
	.error "gText_MayBrendanMatchCallDesc may not grow beyond its original slot"
	.endif
	.if (. - gText_MayBrendanMatchCallDesc) < 0x7
	.space 0x7 - (. - gText_MayBrendanMatchCallDesc)
	.endif

	@ src/pokenav_match_call_data.c:208 pokenav_match_call_data_line_208
	.globl gText_Rom_5F739E
gText_Rom_5F739E: @ 0x085F739E
	.string "つよくてたのもしい{EOS}"
	.if (. - gText_Rom_5F739E) > 0xa
	.error "gText_Rom_5F739E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F739E) < 0xa
	.space 0xa - (. - gText_Rom_5F739E)
	.endif

	@ src/pokenav_match_call_data.c:245 pokenav_match_call_data_line_245
	.globl gText_Rom_5F73A8
gText_Rom_5F73A8: @ 0x085F73A8
	.string "やさしくてきれい{EOS}"
	.if (. - gText_Rom_5F73A8) > 0x9
	.error "gText_Rom_5F73A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73A8) < 0x9
	.space 0x9 - (. - gText_Rom_5F73A8)
	.endif

	@ src/pokenav_match_call_data.c:336 pokenav_match_call_data_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73B1
gText_Rom_5F73B1: @ 0x085F73B1
	.string "ポケモンがだいすき{EOS}"
	.if (. - gText_Rom_5F73B1) != 0xa
	.error "gText_Rom_5F73B1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F73B6
	.set gText_Rom_5F73B6, gText_Rom_5F73B1 + 0x5
	@ Decoded text from ROM range: offset=0x5F73BB, size=0x6
	.string "パパ{EOS}"
	.string "ママ{EOS}"

	@ src/pokenav_match_call_data.c:360 pokenav_match_call_data_line_360
	.globl gText_Rom_5F73C1
gText_Rom_5F73C1: @ 0x085F73C1
	.string "しんしゅつきぼつ{EOS}"
	.if (. - gText_Rom_5F73C1) > 0x9
	.error "gText_Rom_5F73C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73C1) < 0x9
	.space 0x9 - (. - gText_Rom_5F73C1)
	.endif
