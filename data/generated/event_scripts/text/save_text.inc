	@ data/text/save.inc:2 gText_ConfirmSave
	.globl gText_ConfirmSave
gText_ConfirmSave: @ 0x08276F58
	.string "ここまでの かつやくを\nポケモンレポートに かきこみますか?{EOS}"
	.if (. - gText_ConfirmSave) > 0x1f
	.error "gText_ConfirmSave may not grow beyond its original slot"
	.endif
	.if (. - gText_ConfirmSave) < 0x1f
	.space 0x1f - (. - gText_ConfirmSave)
	.endif
	@ data/text/save.inc:6 gText_AlreadySavedFile (+1 aliases)
	.globl gText_AlreadySavedFile
gText_AlreadySavedFile: @ 0x08276F77
	.string "まえに かかれた レポートに\nうえから かいても いいですか?{EOS}"
	.if (. - gText_AlreadySavedFile) > 0x20
	.error "gText_AlreadySavedFile may not grow beyond its original slot"
	.endif
	.if (. - gText_AlreadySavedFile) < 0x20
	.space 0x20 - (. - gText_AlreadySavedFile)
	.endif
	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_SavingDontTurnOff
gText_SavingDontTurnOff: @ 0x08276F97
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください{EOS}"
	.if (. - gText_SavingDontTurnOff) > 0x24
	.error "gText_SavingDontTurnOff may not grow beyond its original slot"
	.endif
	.if (. - gText_SavingDontTurnOff) < 0x24
	.space 0x24 - (. - gText_SavingDontTurnOff)
	.endif
	.globl Text_08276FBB
Text_08276FBB: @ 0x08276FBB
	@ ANALYSIS: PROVEN_TEXT_BYTES addr=0x08276FBB size=0x18 consumer=ShowSaveMessage charmap_decode=NOT_YET_PROVEN
	.byte 0xFD, 0x01, 0x00, 0x1A, 0xFE, 0x7A, 0x9F, 0xAE, 0x64, 0x16, 0x00, 0x0C, 0x50, 0x06, 0x28, 0x00
	.byte 0x06, 0x07, 0x19, 0x0A, 0x0C, 0x10, 0xAB, 0xFF

	@ data/text/save.inc:18 gText_DifferentSaveFile
	.globl gText_DifferentSaveFile
gText_DifferentSaveFile: @ 0x08276FD3
	.string "ちゅうい!!\p『つづきから はじめる』で\nぼうけん していた レポートが\lかかれています!\pそちらで プレイしていた ぼうけんや\nすべての ポケモン どうぐ などが\lきえてしまいます……\pほんとうに\nうえから かいても いいですか?{EOS}"
	.if (. - gText_DifferentSaveFile) > 0x75
	.error "gText_DifferentSaveFile may not grow beyond its original slot"
	.endif
	.if (. - gText_DifferentSaveFile) < 0x75
	.space 0x75 - (. - gText_DifferentSaveFile)
	.endif
	@ data/text/save.inc:29 gText_SaveError
	.globl gText_SaveError
gText_SaveError: @ 0x08277048
	.string "レポートが かけませんでした\pバックアップカートリッジを\nこうかんしてください!{EOS}"
	.if (. - gText_SaveError) > 0x29
	.error "gText_SaveError may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveError) < 0x29
	.space 0x29 - (. - gText_SaveError)
	.endif
	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	@ SEMANTIC_ROLE: gText_SavingDontTurnOffPower (SAVE_FINAL_POWER_VARIANT; duplicate provenance gText_SavingDontTurnOff)
	.globl gText_SavingDontTurnOffPower
gText_SavingDontTurnOffPower: @ 0x08277071
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください{EOS}"
	.if (. - gText_SavingDontTurnOffPower) > 0x24
	.error "gText_SavingDontTurnOffPower may not grow beyond its original slot"
	.endif
	.if (. - gText_SavingDontTurnOffPower) < 0x24
	.space 0x24 - (. - gText_SavingDontTurnOffPower)
	.endif
	.include "data/text/events/birch_speech.inc"
