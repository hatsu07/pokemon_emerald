	@ ANALYSIS: RAW_RANGE offset=0x5ABBA8, size=0x21
	.byte 0xFC, 0x05, 0x05, 0xFC, 0x04, 0x0D, 0x0E, 0x0F, 0xFF, 0xFC, 0x05, 0x05, 0xFC, 0x04, 0x0D, 0x0E
	.byte 0x0F, 0x45, 0x19, 0x00, 0x2C, 0x3C, 0x2D, 0xFE, 0x2C, 0x0D, 0x2A, 0x0B, 0x0E, 0x10, 0x02, 0xAC
	.byte 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABBC9: battle_controller_player.s: PlayerHandleUnknownYesNoBox; battle_main.s: sub_08039050; battle_script_commands.s: atk5A_yesnoboxlearnmove, atk5B_yesnoboxstoplearningmove, atk67_yesnobox, atkF3_trygivecaughtmonnick; evolution_scene.s: Task_...
	.globl gText_BattleYesNoChoice
gText_BattleYesNoChoice: @ 0x085ABBC9
	@ JP battle Yes/No choice encoded text/control string.
	.byte 0xFC, 0x05, 0x05, 0xFC, 0x04, 0x0D, 0x0E, 0x0F
	.if (. - gText_BattleYesNoChoice) != 0x8
	.error "gText_BattleYesNoChoice size mismatch"
	.endif
	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_YesNo_Copy_Battle
gText_YesNo_Copy_Battle: @ 0x085ABBD1
	.string "はい\nいいえ{EOS}"
	.if (. - gText_YesNo_Copy_Battle) != 0x7
	.error "gText_YesNo_Copy_Battle must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABBD8: battle_controller_player.s: HandleInputChooseMove
	.globl gBattleControllerPlayerData_085ABBD8
gBattleControllerPlayerData_085ABBD8: @ 0x085ABBD8
	@ analyzed canonical ROM range 0x085ABBD8-0x085ABC00
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x29 bytes=41
	.byte 0xFC, 0x05, 0x05, 0xFC, 0x04, 0x0D, 0x0E, 0x0F, 0x02, 0x2A, 0x06, 0x04, 0x29, 0x00, 0x2C, 0x3C
	.byte 0x2D, 0xFE, 0x04, 0x27, 0x2E, 0x44, 0x00, 0x08, 0x41, 0x0B, 0x02, 0xFF, 0xFC, 0x05, 0x05, 0xFC
	.byte 0x04, 0x0D, 0x0E, 0x0F, 0xFF, 0xFC, 0x0C, 0x03, 0xFF
	@ src/battle_message.c:1473 gText_BattleSwitchWhich4
	.globl gText_BattleSwitchWhich4
gText_BattleSwitchWhich4: @ 0x085ABC01
	.string "{ESCAPE 4}{EOS}"
	.if (. - gText_BattleSwitchWhich4) > 0x4
	.error "gText_BattleSwitchWhich4 may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleSwitchWhich4) < 0x4
	.space 0x4 - (. - gText_BattleSwitchWhich4)
	.endif
	@ analyzed canonical ROM range 0x085ABC05-0x085ABC0B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xAE, 0xFF, 0xC2, 0xCA, 0x00, 0x00, 0xFF
