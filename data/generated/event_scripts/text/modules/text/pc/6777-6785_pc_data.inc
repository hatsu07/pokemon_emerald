	@ data/text/record_mix.inc:1 Text_WouldYouLikeToMixRecords
	.globl Text_WouldYouLikeToMixRecords
Text_WouldYouLikeToMixRecords: @ 0x08243690
	.string "おともだちと レポートを\nまぜますか?{EOS}"
	.if (. - Text_WouldYouLikeToMixRecords) > 0x14
	.error "Text_WouldYouLikeToMixRecords may not grow beyond its original slot"
	.endif
	.if (. - Text_WouldYouLikeToMixRecords) < 0x14
	.space 0x14 - (. - Text_WouldYouLikeToMixRecords)
	.endif
	@ data/text/pkmn_center_nurse.inc:18 gText_WeHopeToSeeYouAgain (+1 aliases)
	.globl gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse
gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse: @ 0x082436A4
	.string "またの\nごりようを おまち してます!{EOS}"
	.if (. - gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse) > 0x14
	.error "gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse may not grow beyond its original slot"
	.endif
	.if (. - gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse) < 0x14
	.space 0x14 - (. - gText_WeHopeToSeeYouAgain_Copy_PkmnCenterNurse)
	.endif
	@ field-script:0x242E2C FieldScriptText_2436B8
	.globl gText_Rom_2436B8
gText_Rom_2436B8: @ 0x082436B8
	.string "{0xFD}{0x01}は\nパソコンの　スイッチを　いれた！{EOS}"
	.if (. - gText_Rom_2436B8) > 0x15
	.error "gText_Rom_2436B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436B8) < 0x15
	.space 0x15 - (. - gText_Rom_2436B8)
	.endif
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
