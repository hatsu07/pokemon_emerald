	@ data/text/pc.inc:5 gText_WhichPCShouldBeAccessed
	.globl gText_WhichPCShouldBeAccessed
gText_WhichPCShouldBeAccessed: @ 0x082436CD
	.string "どこの パソコンに せつぞく して\nつうしん しますか?{EOS}"
	.if (. - gText_WhichPCShouldBeAccessed) > 0x1d
	.error "gText_WhichPCShouldBeAccessed may not grow beyond its original slot"
	.endif
	.if (. - gText_WhichPCShouldBeAccessed) < 0x1d
	.space 0x1d - (. - gText_WhichPCShouldBeAccessed)
	.endif

	@ data/text/pc.inc:9 gText_AccessedSomeonesPC
	.globl gText_AccessedSomeonesPC
gText_AccessedSomeonesPC: @ 0x082436EA
	.string "だれかの パソコンに せつぞく した!{EOS}"
	.if (. - gText_AccessedSomeonesPC) > 0x14
	.error "gText_AccessedSomeonesPC may not grow beyond its original slot"
	.endif
	.if (. - gText_AccessedSomeonesPC) < 0x14
	.space 0x14 - (. - gText_AccessedSomeonesPC)
	.endif

	@ data/text/pc.inc:12 gText_StorageSystemOpened
	.globl gText_StorageSystemOpened
gText_StorageSystemOpened: @ 0x082436FE
	.string "ポケモンの あずかり システムを\nよびだした!{EOS}"
	.if (. - gText_StorageSystemOpened) > 0x18
	.error "gText_StorageSystemOpened may not grow beyond its original slot"
	.endif
	.if (. - gText_StorageSystemOpened) < 0x18
	.space 0x18 - (. - gText_StorageSystemOpened)
	.endif

	@ data/text/pc.inc:16 gText_AccessedPlayersPC
	.globl gText_AccessedPlayersPC
gText_AccessedPlayersPC: @ 0x08243716
	.string "{PLAYER}の パソコンに せつぞくした!{EOS}"
	.if (. - gText_AccessedPlayersPC) > 0x12
	.error "gText_AccessedPlayersPC may not grow beyond its original slot"
	.endif
	.if (. - gText_AccessedPlayersPC) < 0x12
	.space 0x12 - (. - gText_AccessedPlayersPC)
	.endif

	@ data/text/pc.inc:19 gText_AccessedLanettesPC
	.globl gText_AccessedLanettesPC
gText_AccessedLanettesPC: @ 0x08243728
	.string "マユミの パソコンに せつぞく した!{EOS}"
	.if (. - gText_AccessedLanettesPC) > 0x14
	.error "gText_AccessedLanettesPC may not grow beyond its original slot"
	.endif
	.if (. - gText_AccessedLanettesPC) < 0x14
	.space 0x14 - (. - gText_AccessedLanettesPC)
	.endif
