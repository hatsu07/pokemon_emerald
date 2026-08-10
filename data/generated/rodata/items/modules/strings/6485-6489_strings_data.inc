	@ src/strings.c:834 gText_FirstPlacePrize
	.globl gText_Rom_5CCD86
gText_Rom_5CCD86: @ 0x085CCD86
	.string "1ばんに なった ひとに\n{DYNAMIC 0}を プレゼント!!$"
	.if (. - gText_Rom_5CCD86) > 0x19
	.error "gText_Rom_5CCD86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD86) < 0x19
	.space 0x19 - (. - gText_Rom_5CCD86)
	.endif
	.globl gUnknown_85CCD9F
gUnknown_85CCD9F: @ 0x085CCD9F
	@ Decoded text from ROM range: offset=0x5CCD9F, size=0xC
	.string "{SE_M_HYPER_BEAM2}は　いっぱいです…$"
	@ pret/pokeemerald-jp direct xref for 0x085CCDAB: dodrio_berry_picking.s: sub_080295A4
	.globl gDodrioBerryPickingData_085CCDAB
gDodrioBerryPickingData_085CCDAB:
	.globl gUnknown_85CCDAB
gUnknown_85CCDAB: @ 0x085CCDAB
	@ analyzed canonical ROM range 0x085CCDAB-0x085CCDBC
sAnalyzedData_085CCDAB: @ 0x085CCDAB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF7, 0x00, 0x37, 0x00, 0x02, 0x50, 0x4B, 0x02, 0x16, 0x15, 0x50, 0x13, 0x0C, 0x1F, 0x50, 0x10
	.byte 0xAB, 0xFF
	.globl gUnknown_85CCDBD
gUnknown_85CCDBD: @ 0x085CCDBD

	@ src/strings.c:837 gText_WantToPlayAgain (+1 aliases)
	.globl gText_Rom_5CCDBD
gText_Rom_5CCDBD: @ 0x085CCDBD
	.string "もういちど あそびますか？$"
	.if (. - gText_Rom_5CCDBD) > 0xe
	.error "gText_Rom_5CCDBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDBD) < 0xe
	.space 0xe - (. - gText_Rom_5CCDBD)
	.endif
	.globl gUnknown_85CCDCB
gUnknown_85CCDCB: @ 0x085CCDCB

	@ src/strings.c:838 gText_SomeoneDroppedOut
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCDCB
gText_Rom_5CCDCB: @ 0x085CCDCB
	.string "だれかが ぬけました\nつうしんを しゅうりょう します$"
	.if (. - gText_Rom_5CCDCB) != 0x1c
	.error "gText_Rom_5CCDCB must retain its original byte length"
	.endif
