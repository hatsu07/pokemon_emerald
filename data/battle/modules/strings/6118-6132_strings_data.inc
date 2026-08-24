	@ src/strings.c:702 gText_FacilitySingle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_FacilitySingle
gText_FacilitySingle: @ 0x085CC45C
	.string "{STR_VAR_1} シングル{EOS}"
	.if (. - gText_FacilitySingle) != 0x8
	.error "gText_FacilitySingle must retain its original byte length"
	.endif
	.globl gText_Rom_5CC45F
	.set gText_Rom_5CC45F, gText_FacilitySingle + 0x3

	@ src/strings.c:703 gText_FacilityDouble
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_FacilityDouble
gText_FacilityDouble: @ 0x085CC464
	.string "{STR_VAR_1} ダブル{EOS}"
	.if (. - gText_FacilityDouble) != 0x7
	.error "gText_FacilityDouble must retain its original byte length"
	.endif
	.globl gText_Rom_5CC467
	.set gText_Rom_5CC467, gText_FacilityDouble + 0x3
	.space 0x1, 0x00

	@ src/strings.c:704 gText_FacilityMulti
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_FacilityMulti
gText_FacilityMulti: @ 0x085CC46C
	.string "{STR_VAR_1} マルチ{EOS}"
	.if (. - gText_FacilityMulti) != 0x7
	.error "gText_FacilityMulti must retain its original byte length"
	.endif
	.globl gText_Rom_5CC46F
	.set gText_Rom_5CC46F, gText_FacilityMulti + 0x3
	.space 0x1, 0x00

	@ src/strings.c:705 gText_FacilityLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_FacilityLink
gText_FacilityLink: @ 0x085CC474
	.string "{STR_VAR_1} つうしん{EOS}"
	.if (. - gText_FacilityLink) != 0x8
	.error "gText_FacilityLink must retain its original byte length"
	.endif
	.globl gText_Rom_5CC477
	.set gText_Rom_5CC477, gText_FacilityLink + 0x3
	@ ANALYSIS: RAW_RANGE offset=0x5CC47C, size=0x3
	.byte 0xFD, 0x02, 0xFF

	@ src/strings.c:708 gText_Give
	.globl gText_Give
gText_Give: @ 0x085CC47F
	.string "もたせるべき{EOS}"
	.if (. - gText_Give) > 0x7
	.error "gText_Give may not grow beyond its original slot"
	.endif
	.if (. - gText_Give) < 0x7
	.space 0x7 - (. - gText_Give)
	.endif

	@ src/strings.c:709 gText_NoNeed
	.globl gText_NoNeed
gText_NoNeed: @ 0x085CC486
	.string "もたせない{EOS}"
	.if (. - gText_NoNeed) > 0x6
	.error "gText_NoNeed may not grow beyond its original slot"
	.endif
	.if (. - gText_NoNeed) < 0x6
	.space 0x6 - (. - gText_NoNeed)
	.endif
