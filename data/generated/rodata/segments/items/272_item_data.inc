	@ asm/dodrio_berry_picking.s:10482 sub_080295A4
	.globl gText_Rom_5CCD45
gText_Rom_5CCD45: @ 0x085CCD45
	.string "10P　　30P　　50P　　{0xF9}{0xDD}50P$"
	.if (. - gText_Rom_5CCD45) > 0x15
	.error "gText_Rom_5CCD45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD45) < 0x15
	.space 0x15 - (. - gText_Rom_5CCD45)
	.endif
	.globl gUnknown_85CCD5A
gUnknown_85CCD5A: @ 0x085CCD5A

	@ src/strings.c:827 gText_AnnouncingRankings
	.globl gText_Rom_5CCD5A
gText_Rom_5CCD5A: @ 0x085CCD5A
	.string "じゅんいの はっぴょう!!$"
	.if (. - gText_Rom_5CCD5A) > 0xe
	.error "gText_Rom_5CCD5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD5A) < 0xe
	.space 0xe - (. - gText_Rom_5CCD5A)
	.endif
	.globl gUnknown_85CCD68
gUnknown_85CCD68: @ 0x085CCD68

	@ src/strings.c:828 gText_AnnouncingPrizes
	.globl gText_Rom_5CCD68
gText_Rom_5CCD68: @ 0x085CCD68
	.string "しょうひんの はっぴょう!!$"
	.if (. - gText_Rom_5CCD68) > 0xf
	.error "gText_Rom_5CCD68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD68) < 0xf
	.space 0xf - (. - gText_Rom_5CCD68)
	.endif

	@ asm/dodrio_berry_picking.s:10242 sub_080293D4
	.globl gText_Rom_5CCD77
gText_Rom_5CCD77: @ 0x085CCD77
	.string "1:$"
	.if (. - gText_Rom_5CCD77) > 0x3
	.error "gText_Rom_5CCD77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD77) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD77)
	.endif

	@ asm/dodrio_berry_picking.s:10242 sub_080293D4 (+1 aliases)
	.globl gText_Rom_5CCD7A
gText_Rom_5CCD7A: @ 0x085CCD7A
	.string "2:$"
	.if (. - gText_Rom_5CCD7A) > 0x3
	.error "gText_Rom_5CCD7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD7A) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD7A)
	.endif

	@ asm/dodrio_berry_picking.s:10242 sub_080293D4 (+1 aliases)
	.globl gText_Rom_5CCD7D
gText_Rom_5CCD7D: @ 0x085CCD7D
	.string "3:$"
	.if (. - gText_Rom_5CCD7D) > 0x3
	.error "gText_Rom_5CCD7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD7D) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD7D)
	.endif

	@ asm/dodrio_berry_picking.s:10242 sub_080293D4 (+1 aliases)
	.globl gText_Rom_5CCD80
gText_Rom_5CCD80: @ 0x085CCD80
	.string "4:$"
	.if (. - gText_Rom_5CCD80) > 0x3
	.error "gText_Rom_5CCD80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD80) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD80)
	.endif

	@ asm/dodrio_berry_picking.s:10242 sub_080293D4 (+1 aliases)
	.globl gText_Rom_5CCD83
gText_Rom_5CCD83: @ 0x085CCD83
	.string "5:$"
	.if (. - gText_Rom_5CCD83) > 0x3
	.error "gText_Rom_5CCD83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD83) < 0x3
	.space 0x3 - (. - gText_Rom_5CCD83)
	.endif
	.globl gUnknown_85CCD86
gUnknown_85CCD86: @ 0x085CCD86

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
	.globl gUnknown_85CCDAB
gUnknown_85CCDAB: @ 0x085CCDAB
	@ Replaced baserom.gba range: offset=0x5CCDAB, size=0x12
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
	.globl gText_Rom_5CCDE3
	.set gText_Rom_5CCDE3, gText_Rom_5CCDCB + 0x18
	.globl gUnknown_85CCDE7
gUnknown_85CCDE7: @ 0x085CCDE7

	@ asm/dodrio_berry_picking.s:10321 sub_080293D4
	.globl gText_Rom_5CCDE7
gText_Rom_5CCDE7: @ 0x085CCDE7
	.string "てん$"
	.if (. - gText_Rom_5CCDE7) > 0x3
	.error "gText_Rom_5CCDE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDE7) < 0x3
	.space 0x3 - (. - gText_Rom_5CCDE7)
	.endif
	.globl gUnknown_85CCDEA
gUnknown_85CCDEA: @ 0x085CCDEA

	@ src/strings.c:840 gText_CommunicationStandby3
	.globl gText_Rom_5CCDEA
gText_Rom_5CCDEA: @ 0x085CCDEA
	.string "つうしん たいきちゅうです$"
	.if (. - gText_Rom_5CCDEA) > 0xe
	.error "gText_Rom_5CCDEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCDEA) < 0xe
	.space 0xe - (. - gText_Rom_5CCDEA)
	.endif
	.globl gUnknown_85CCDF8
gUnknown_85CCDF8: @ 0x085CCDF8
	@ Decoded text from ROM range: offset=0x5CCDF8, size=0x3
	.string "てん$"
	.globl gUnknown_85CCDFB
gUnknown_85CCDFB: @ 0x085CCDFB
	@ Replaced baserom.gba range: offset=0x5CCDFB, size=0x3
	.byte 0x06, 0x02, 0xFF
	.globl gUnknown_85CCDFE
gUnknown_85CCDFE: @ 0x085CCDFE

	@ src/strings.c:843 gText_PkmnJumpRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCDFE
gText_Rom_5CCDFE: @ 0x085CCDFE
	.string "ミニポケモンでジャンプの きろく$"
	.if (. - gText_Rom_5CCDFE) != 0x11
	.error "gText_Rom_5CCDFE must retain its original byte length"
	.endif
	.globl gText_Rom_5CCE0B
	.set gText_Rom_5CCE0B, gText_Rom_5CCDFE + 0xd

