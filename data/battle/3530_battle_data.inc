	@ pret/pokeemerald-jp direct xref for 0x085ABBC9: battle_controller_player.s: PlayerHandleUnknownYesNoBox; battle_main.s: sub_08039050; battle_script_commands.s: atk5A_yesnoboxlearnmove, atk5B_yesnoboxstoplearningmove, atk67_yesnobox, atkF3_trygivecaughtmonnick; evolution_scene.s: Task_...
	.globl gText_BattleYesNoChoice
gText_BattleYesNoChoice: @ 0x085ABBC9
	@ JP battle Yes/No choice encoded text/control string.
	.byte 0xFC, 0x05, 0x05, 0xFC, 0x04, 0x0D, 0x0E, 0x0F
	.if (. - gText_BattleYesNoChoice) != 0x8
	.error "gText_BattleYesNoChoice size mismatch"
	.endif
