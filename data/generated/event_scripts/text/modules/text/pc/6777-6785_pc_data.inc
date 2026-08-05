	@ data/text/pc.inc:5 gText_WhichPCShouldBeAccessed
	.globl gText_Rom_2436CD
gText_Rom_2436CD: @ 0x082436CD
	.string "どこの パソコンに せつぞく して\nつうしん しますか?$"
	.if (. - gText_Rom_2436CD) > 0x1d
	.error "gText_Rom_2436CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436CD) < 0x1d
	.space 0x1d - (. - gText_Rom_2436CD)
	.endif

	@ data/text/pc.inc:9 gText_AccessedSomeonesPC
	.globl gText_Rom_2436EA
gText_Rom_2436EA: @ 0x082436EA
	.string "だれかの パソコンに せつぞく した!$"
	.if (. - gText_Rom_2436EA) > 0x14
	.error "gText_Rom_2436EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436EA) < 0x14
	.space 0x14 - (. - gText_Rom_2436EA)
	.endif

	@ data/text/pc.inc:12 gText_StorageSystemOpened
	.globl gText_Rom_2436FE
gText_Rom_2436FE: @ 0x082436FE
	.string "ポケモンの あずかり システムを\nよびだした!$"
	.if (. - gText_Rom_2436FE) > 0x18
	.error "gText_Rom_2436FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436FE) < 0x18
	.space 0x18 - (. - gText_Rom_2436FE)
	.endif

	@ data/text/pc.inc:16 gText_AccessedPlayersPC
	.globl gText_Rom_243716
gText_Rom_243716: @ 0x08243716
	.string "{PLAYER}の パソコンに せつぞくした!$"
	.if (. - gText_Rom_243716) > 0x12
	.error "gText_Rom_243716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243716) < 0x12
	.space 0x12 - (. - gText_Rom_243716)
	.endif

	@ data/text/pc.inc:19 gText_AccessedLanettesPC
	.globl gText_Rom_243728
gText_Rom_243728: @ 0x08243728
	.string "マユミの パソコンに せつぞく した!$"
	.if (. - gText_Rom_243728) > 0x14
	.error "gText_Rom_243728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243728) < 0x14
	.space 0x14 - (. - gText_Rom_243728)
	.endif
