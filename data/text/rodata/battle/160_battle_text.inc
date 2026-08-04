	@ src/battle_message.c:1554 gText_RecordBattleToPass
	.globl gText_Rom_5AC0DD
gText_Rom_5AC0DD: @ 0x085AC0DD
	.string "いまの たたかいを フロンティアパスに\nきろく しますか?$"
	.if (. - gText_Rom_5AC0DD) > 0x1e
	.error "gText_Rom_5AC0DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0DD) < 0x1e
	.space 0x1e - (. - gText_Rom_5AC0DD)
	.endif
	.globl gUnknown_85AC0FB
gUnknown_85AC0FB: @ 0x085AC0FB

	@ src/battle_message.c:1555 gText_BattleRecordedOnPass
	.globl gText_Rom_5AC0FB
gText_Rom_5AC0FB: @ 0x085AC0FB
	.string "{B_PLAYER_NAME}の たたかいが\nフロンティアパスに きろく された!$"
	.if (. - gText_Rom_5AC0FB) > 0x1d
	.error "gText_Rom_5AC0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0FB) < 0x1d
	.space 0x1d - (. - gText_Rom_5AC0FB)
	.endif
	.globl gUnknown_85AC118
gUnknown_85AC118: @ 0x085AC118
	.incbin "baserom.gba", 0x5ac118, 0x15
	.globl gUnknown_85AC12D
gUnknown_85AC12D: @ 0x085AC12D
	.incbin "baserom.gba", 0x5ac12d, 0x19
	.globl gUnknown_85AC146
gUnknown_85AC146: @ 0x085AC146
	.incbin "baserom.gba", 0x5ac146, 0x322
	.globl gUnknown_85AC468
gUnknown_85AC468: @ 0x085AC468
	.incbin "baserom.gba", 0x5ac468, 0x8
	.globl gUnknown_85AC470
gUnknown_85AC470: @ 0x085AC470
	.incbin "baserom.gba", 0x5ac470, 0x4
	.globl gUnknown_85AC474
gUnknown_85AC474: @ 0x085AC474
	.incbin "baserom.gba", 0x5ac474, 0x10
	.globl gUnknown_85AC484
gUnknown_85AC484: @ 0x085AC484
	.incbin "baserom.gba", 0x5ac484, 0x158
	.globl gUnknown_85AC5DC
gUnknown_85AC5DC: @ 0x085AC5DC
	.incbin "baserom.gba", 0x5ac5dc, 0x184
	.globl gUnknown_85AC760
gUnknown_85AC760: @ 0x085AC760
	.incbin "baserom.gba", 0x5ac760, 0x1c4
	.globl gUnknown_85AC924
gUnknown_85AC924: @ 0x085AC924
	.incbin "baserom.gba", 0x5ac924, 0x14
	.globl gUnknown_85AC938
gUnknown_85AC938: @ 0x085AC938
	.incbin "baserom.gba", 0x5ac938, 0x24
	.globl gUnknown_85AC95C
gUnknown_85AC95C: @ 0x085AC95C
	.incbin "baserom.gba", 0x5ac95c, 0x20
	.globl gUnknown_85AC97C
gUnknown_85AC97C: @ 0x085AC97C
	.incbin "baserom.gba", 0x5ac97c, 0x28
	.globl gUnknown_85AC9A4
gUnknown_85AC9A4: @ 0x085AC9A4
	.incbin "baserom.gba", 0x5ac9a4, 0x30
	.globl gUnknown_85AC9D4
gUnknown_85AC9D4: @ 0x085AC9D4
	.incbin "baserom.gba", 0x5ac9d4, 0x18
	.globl gUnknown_85AC9EC
gUnknown_85AC9EC: @ 0x085AC9EC
	.incbin "baserom.gba", 0x5ac9ec, 0x2
	.globl gUnknown_85AC9EE
gUnknown_85AC9EE: @ 0x085AC9EE
	.incbin "baserom.gba", 0x5ac9ee, 0x4
	.globl gUnknown_85AC9F2
gUnknown_85AC9F2: @ 0x085AC9F2
	.incbin "baserom.gba", 0x5ac9f2, 0x8
	.globl gUnknown_85AC9FA
gUnknown_85AC9FA: @ 0x085AC9FA
	.incbin "baserom.gba", 0x5ac9fa, 0x6
	.globl gUnknown_85ACA00
gUnknown_85ACA00: @ 0x085ACA00
	.4byte sub_08150A44
	.4byte sub_08150AD0
	.globl gUnknown_85ACA08
gUnknown_85ACA08: @ 0x085ACA08
	.incbin "baserom.gba", 0x5aca08, 0x38
	.globl gUnknown_85ACA40
gUnknown_85ACA40: @ 0x085ACA40
	.incbin "baserom.gba", 0x5aca40, 0x6
	.globl gUnknown_85ACA46
gUnknown_85ACA46: @ 0x085ACA46
	.incbin "baserom.gba", 0x5aca46, 0x4
	.globl gUnknown_85ACA4A
gUnknown_85ACA4A: @ 0x085ACA4A
	.incbin "baserom.gba", 0x5aca4a, 0xa
	.globl gUnknown_85ACA54
gUnknown_85ACA54: @ 0x085ACA54
	.4byte FadeFootprintsTireTracks_Step0
	.4byte FadeFootprintsTireTracks_Step1
	.globl gUnknown_85ACA5C
gUnknown_85ACA5C: @ 0x085ACA5C
	.4byte UpdateAshFieldEffect_Step0
	.4byte UpdateAshFieldEffect_Step1
	.4byte UpdateAshFieldEffect_Step2
	.globl gUnknown_85ACA68
gUnknown_85ACA68: @ 0x085ACA68
	.incbin "baserom.gba", 0x5aca68, 0xa
	.globl gUnknown_85ACA72
gUnknown_85ACA72: @ 0x085ACA72
	.incbin "baserom.gba", 0x5aca72, 0x96
	.globl gUnknown_85ACB08
gUnknown_85ACB08: @ 0x085ACB08
	.4byte ContestAICmd_score
	.4byte ContestAICmd_get_turn
	.4byte ContestAICmd_if_turn_less_than
	.4byte ContestAICmd_if_turn_more_than
	.4byte ContestAICmd_if_turn_eq
	.4byte ContestAICmd_if_turn_not_eq
	.4byte ContestAICmd_get_excitement
	.4byte ContestAICmd_if_excitement_less_than
	.4byte ContestAICmd_if_excitement_more_than
	.4byte ContestAICmd_if_excitement_eq
	.4byte ContestAICmd_if_excitement_not_eq
	.4byte ContestAICmd_get_user_order
	.4byte ContestAICmd_if_user_order_less_than
	.4byte ContestAICmd_if_user_order_more_than
	.4byte ContestAICmd_if_user_order_eq
	.4byte ContestAICmd_if_user_order_not_eq
	.4byte ContestAICmd_get_user_condition
	.4byte ContestAICmd_if_user_condition_less_than
	.4byte ContestAICmd_if_user_condition_more_than
	.4byte ContestAICmd_if_user_condition_eq
	.4byte ContestAICmd_if_user_condition_not_eq
	.4byte ContestAICmd_unk_15
	.4byte ContestAICmd_unk_1B
	.4byte ContestAICmd_unk_17
	.4byte ContestAICmd_unk_18
	.4byte ContestAICmd_unk_1E
	.4byte ContestAICmd_unk_1A
	.4byte ContestAICmd_unk_16
	.4byte ContestAICmd_unk_1C
	.4byte ContestAICmd_unk_1D
	.4byte ContestAICmd_unk_19
	.4byte ContestAICmd_get_contest_type
	.4byte ContestAICmd_if_contest_type_eq
	.4byte ContestAICmd_if_contest_type_not_eq
	.4byte ContestAICmd_get_move_excitement
	.4byte ContestAICmd_if_move_excitement_less_than
	.4byte ContestAICmd_if_move_excitement_greater_than
	.4byte ContestAICmd_if_move_excitement_eq
	.4byte ContestAICmd_if_move_excitement_not_eq
	.4byte ContestAICmd_get_move_effect
	.4byte ContestAICmd_if_move_effect_eq
	.4byte ContestAICmd_if_move_effect_not_eq
	.4byte ContestAICmd_get_move_effect_type
	.4byte ContestAICmd_if_move_effect_type_eq
	.4byte ContestAICmd_if_move_effect_type_not_eq
	.4byte ContestAICmd_check_most_appealing_move
	.4byte ContestAICmd_if_most_appealing_move
	.4byte ContestAICmd_unk_2F
	.4byte ContestAICmd_unk_30
	.4byte ContestAICmd_unk_31
	.4byte ContestAICmd_unk_32
	.4byte ContestAICmd_if_used_combo_starter_more_than
	.4byte ContestAICmd_if_used_combo_starter_eq
	.4byte ContestAICmd_unk_35
	.4byte ContestAICmd_unk_36
	.4byte ContestAICmd_unk_37
	.4byte ContestAICmd_unk_33
	.4byte ContestAICmd_unk_34
	.4byte ContestAICmd_unk_3A
	.4byte ContestAICmd_get_move_used_count
	.4byte ContestAICmd_if_most_used_count_less_than
	.4byte ContestAICmd_if_most_used_count_more_than
	.4byte ContestAICmd_if_most_used_count_eq
	.4byte ContestAICmd_if_most_used_count_not_eq
	.4byte ContestAICmd_check_combo_starter
	.4byte ContestAICmd_if_combo_starter
	.4byte ContestAICmd_if_not_combo_starter
	.4byte ContestAICmd_check_combo_finisher
	.4byte ContestAICmd_if_combo_finisher
	.4byte ContestAICmd_if_not_combo_finisher
	.4byte ContestAICmd_check_would_finish_combo
	.4byte ContestAICmd_if_would_finish_combo
	.4byte ContestAICmd_if_would_not_finish_combo
	.4byte ContestAICmd_get_condition
	.4byte ContestAICmd_if_condition_less_than
	.4byte ContestAICmd_if_condition_more_than
	.4byte ContestAICmd_if_condition_eq
	.4byte ContestAICmd_if_condition_not_eq
	.4byte ContestAICmd_get_used_combo_starter
	.4byte ContestAICmd_if_used_combo_starter_less_than
	.4byte ContestAICmd_unk_38
	.4byte ContestAICmd_unk_39
	.4byte ContestAICmd_if_used_combo_starter_not_eq
	.4byte ContestAICmd_check_can_participate
	.4byte ContestAICmd_if_can_participate
	.4byte ContestAICmd_if_cannot_participate
	.4byte ContestAICmd_get_val_812A188
	.4byte ContestAICmd_unk_57
	.4byte ContestAICmd_contest_58
	.4byte ContestAICmd_unk_59
	.4byte ContestAICmd_unk_5A
	.4byte ContestAICmd_unk_5B
	.4byte ContestAICmd_unk_5C
	.4byte ContestAICmd_unk_5D
	.4byte ContestAICmd_unk_5E
	.4byte ContestAICmd_unk_5F
	.4byte ContestAICmd_unk_60
	.4byte ContestAICmd_unk_61
	.4byte ContestAICmd_unk_62
	.4byte ContestAICmd_unk_63
	.4byte ContestAICmd_unk_64
	.4byte ContestAICmd_unk_65
	.4byte ContestAICmd_unk_66
	.4byte ContestAICmd_unk_67
	.4byte ContestAICmd_unk_68
	.4byte ContestAICmd_unk_69
	.4byte ContestAICmd_unk_6A
	.4byte ContestAICmd_unk_6B
	.4byte ContestAICmd_unk_6C
	.4byte ContestAICmd_unk_6D
	.4byte ContestAICmd_unk_6E
	.4byte ContestAICmd_unk_6F
	.4byte ContestAICmd_unk_70
	.4byte ContestAICmd_unk_71
	.4byte ContestAICmd_unk_72
	.4byte ContestAICmd_unk_74
	.4byte ContestAICmd_unk_73
	.4byte ContestAICmd_unk_75
	.4byte ContestAICmd_unk_76
	.4byte ContestAICmd_unk_77
	.4byte ContestAICmd_unk_78
	.4byte ContestAICmd_unk_79
	.4byte ContestAICmd_unk_7A
	.4byte ContestAICmd_unk_7B
	.4byte ContestAICmd_unk_7C
	.4byte ContestAICmd_if_random
	.4byte ContestAICmd_unk_7E
	.4byte ContestAICmd_jump
	.4byte ContestAICmd_call
	.4byte ContestAICmd_end
	.4byte ContestAICmd_check_user_has_exciting_move
	.4byte ContestAICmd_if_user_has_exciting_move
	.4byte ContestAICmd_if_user_doesnt_have_exciting_move
	.4byte ContestAICmd_unk_85
	.4byte ContestAICmd_unk_86
	.4byte ContestAICmd_if_effect_in_user_moveset
	.globl gUnknown_85ACD28
gUnknown_85ACD28: @ 0x085ACD28
	.incbin "baserom.gba", 0x5acd28, 0x380
	.globl gUnknown_85AD0A8
gUnknown_85AD0A8: @ 0x085AD0A8
	.incbin "baserom.gba", 0x5ad0a8, 0xb0
	.globl gUnknown_85AD158
gUnknown_85AD158: @ 0x085AD158
	.incbin "baserom.gba", 0x5ad158, 0x38
	.globl gUnknown_85AD190
gUnknown_85AD190: @ 0x085AD190
	.incbin "baserom.gba", 0x5ad190, 0x18
	.globl gUnknown_85AD1A8
gUnknown_85AD1A8: @ 0x085AD1A8
	.incbin "baserom.gba", 0x5ad1a8, 0x18
	.globl gUnknown_85AD1C0
gUnknown_85AD1C0: @ 0x085AD1C0
	.incbin "baserom.gba", 0x5ad1c0, 0x28
	.globl gUnknown_85AD1E8
gUnknown_85AD1E8: @ 0x085AD1E8
	.incbin "baserom.gba", 0x5ad1e8, 0x50
	.globl gUnknown_85AD238
gUnknown_85AD238: @ 0x085AD238
	.incbin "baserom.gba", 0x5ad238, 0x30
	.globl gUnknown_85AD268
gUnknown_85AD268: @ 0x085AD268
	.incbin "baserom.gba", 0x5ad268, 0x2c
	.globl gUnknown_85AD294
gUnknown_85AD294: @ 0x085AD294
	.incbin "baserom.gba", 0x5ad294, 0x18
	.globl gUnknown_85AD2AC
gUnknown_85AD2AC: @ 0x085AD2AC
	.incbin "baserom.gba", 0x5ad2ac, 0x4
	.globl gUnknown_85AD2B0
gUnknown_85AD2B0: @ 0x085AD2B0
	@ Resolved pointer table; original ROM range 0x5AD2B0..0x5AD2B7.
	.4byte 0
	.4byte ABILITY_RUN_AWAY
	.globl gUnknown_85AD2B8
gUnknown_85AD2B8: @ 0x085AD2B8
	.incbin "baserom.gba", 0x5ad2b8, 0x140
	.globl gUnknown_85AD3F8
gUnknown_85AD3F8: @ 0x085AD3F8
	.incbin "baserom.gba", 0x5ad3f8, 0x15c
	.globl gUnknown_85AD554
gUnknown_85AD554: @ 0x085AD554
	.incbin "baserom.gba", 0x5ad554, 0x20
	.globl gUnknown_85AD574
gUnknown_85AD574: @ 0x085AD574
	.incbin "baserom.gba", 0x5ad574, 0x18
	.globl gUnknown_85AD58C
gUnknown_85AD58C: @ 0x085AD58C
	.incbin "baserom.gba", 0x5ad58c, 0x68
	.globl gUnknown_85AD5F4
gUnknown_85AD5F4: @ 0x085AD5F4
	.incbin "baserom.gba", 0x5ad5f4, 0x60
	.globl gUnknown_85AD654
gUnknown_85AD654: @ 0x085AD654
	.incbin "baserom.gba", 0x5ad654, 0x30
	.globl gUnknown_85AD684
gUnknown_85AD684: @ 0x085AD684
	.incbin "baserom.gba", 0x5ad684, 0x14c
	.globl gUnknown_85AD7D0
gUnknown_85AD7D0: @ 0x085AD7D0
	.incbin "baserom.gba", 0x5ad7d0, 0x1d0
	.globl gUnknown_85AD9A0
gUnknown_85AD9A0: @ 0x085AD9A0

