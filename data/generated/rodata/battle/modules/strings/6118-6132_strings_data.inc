	@ src/strings.c:702 gText_FacilitySingle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC45C
gText_Rom_5CC45C: @ 0x085CC45C
	.string "{STR_VAR_1} シングル$"
	.if (. - gText_Rom_5CC45C) != 0x8
	.error "gText_Rom_5CC45C must retain its original byte length"
	.endif
	.globl gText_Rom_5CC45F
	.set gText_Rom_5CC45F, gText_Rom_5CC45C + 0x3

	@ src/strings.c:703 gText_FacilityDouble
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC464
gText_Rom_5CC464: @ 0x085CC464
	.string "{STR_VAR_1} ダブル$"
	.if (. - gText_Rom_5CC464) != 0x7
	.error "gText_Rom_5CC464 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC467
	.set gText_Rom_5CC467, gText_Rom_5CC464 + 0x3
	.space 0x1, 0x00

	@ src/strings.c:704 gText_FacilityMulti
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC46C
gText_Rom_5CC46C: @ 0x085CC46C
	.string "{STR_VAR_1} マルチ$"
	.if (. - gText_Rom_5CC46C) != 0x7
	.error "gText_Rom_5CC46C must retain its original byte length"
	.endif
	.globl gText_Rom_5CC46F
	.set gText_Rom_5CC46F, gText_Rom_5CC46C + 0x3
	.space 0x1, 0x00

	@ src/strings.c:705 gText_FacilityLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC474
gText_Rom_5CC474: @ 0x085CC474
	.string "{STR_VAR_1} つうしん$"
	.if (. - gText_Rom_5CC474) != 0x8
	.error "gText_Rom_5CC474 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC477
	.set gText_Rom_5CC477, gText_Rom_5CC474 + 0x3
	@ Replaced baserom.gba range: offset=0x5CC47C, size=0x3
	.byte 0xFD, 0x02, 0xFF
	.globl gUnknown_85CC47F
gUnknown_85CC47F: @ 0x085CC47F

	@ src/strings.c:708 gText_Give
	.globl gText_Rom_5CC47F
gText_Rom_5CC47F: @ 0x085CC47F
	.string "もたせるべき$"
	.if (. - gText_Rom_5CC47F) > 0x7
	.error "gText_Rom_5CC47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC47F) < 0x7
	.space 0x7 - (. - gText_Rom_5CC47F)
	.endif
	.globl gUnknown_85CC486
gUnknown_85CC486: @ 0x085CC486

	@ src/strings.c:709 gText_NoNeed
	.globl gText_Rom_5CC486
gText_Rom_5CC486: @ 0x085CC486
	.string "もたせない$"
	.if (. - gText_Rom_5CC486) > 0x6
	.error "gText_Rom_5CC486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC486) < 0x6
	.space 0x6 - (. - gText_Rom_5CC486)
	.endif
