	@ pret/pokeemerald-jp direct xref for 0x085ACA40: field_effect_helpers.s: LoadObjectReflectionPalette
	.globl gFieldEffectHelpersData_085ACA40
gFieldEffectHelpersData_085ACA40: @ 0x085ACA40
	@ analyzed canonical ROM range 0x085ACA40-0x085ACA45
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0x0C, 0x00, 0x1C, 0x00, 0x2C, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085ACA46: field_effect_helpers.s: FldEff_Shadow
	.globl gFieldEffectHelpersData_085ACA46
gFieldEffectHelpersData_085ACA46: @ 0x085ACA46
	@ analyzed canonical ROM range 0x085ACA46-0x085ACA49
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x01, 0x02, 0x03
	@ pret/pokeemerald-jp direct xref for 0x085ACA4A: field_effect_helpers.s: FldEff_Shadow
	.globl gFieldEffectHelpersData_085ACA4A
gFieldEffectHelpersData_085ACA4A: @ 0x085ACA4A
	@ analyzed canonical ROM range 0x085ACA4A-0x085ACA53
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x0004, 0x0004, 0x0004, 0x0010, 0x0000
	.4byte FadeFootprintsTireTracks_Step0
	.4byte FadeFootprintsTireTracks_Step1
	.4byte UpdateAshFieldEffect_Step0
	.4byte UpdateAshFieldEffect_Step1
	.4byte UpdateAshFieldEffect_Step2
	@ pret/pokeemerald-jp direct xref for 0x085ACA68: field_effect_helpers.s: SynchroniseSurfAnim
	.globl gFieldEffectHelpersData_085ACA68
gFieldEffectHelpersData_085ACA68: @ 0x085ACA68
	@ analyzed canonical ROM range 0x085ACA68-0x085ACA71
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x0000, 0x0201, 0x0003, 0x0100, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085ACA72: field_effect_helpers.s: CreateBobbingEffect
	.globl gFieldEffectHelpersData_085ACA72
gFieldEffectHelpersData_085ACA72: @ 0x085ACA72
	@ analyzed canonical ROM range 0x085ACA72-0x085ACB07
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x96 entries=75
	.2byte 0x0003, 0x0007, 0x0201, 0x0202, 0x0202, 0x0202, 0x0202, 0x0102
	.2byte 0x0202, 0x0201, 0x0102, 0x0202, 0x0201, 0x0101, 0x0102, 0x0201
	.2byte 0x0101, 0x0102, 0x0201, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101
	.2byte 0x0101, 0x0101, 0x0100, 0x0101, 0x0100, 0x0001, 0x0001, 0x0001
	.2byte 0x0001, 0x0000, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001
	.2byte 0x0100, 0x0000, 0x0001, 0x0101, 0x0100, 0x0001, 0x0101, 0x0100
	.2byte 0x0001, 0x0101, 0x0000, 0x0001, 0x0100, 0x0000, 0x0001, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00FF
	.2byte 0xFF00, 0x0000, 0x00FF, 0xFFFF, 0xFF00, 0x00FF, 0xFFFF, 0xFFFF
	.2byte 0xFFFF, 0xFEFF, 0x0000
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
