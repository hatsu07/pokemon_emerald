@ Japanese Emerald Contest AI script table and command stream.

	.globl gUnknown_828C8D8
gUnknown_828C8D8:
	.globl gContestAI_ScriptsTable
gContestAI_ScriptsTable: @ 0x0828C8D8
	.4byte ContestAI_CheckBadMove @ Contest AI script index 0
	.4byte ContestAI_CheckCombo @ Contest AI script index 1
	.4byte ContestAI_CheckBoring @ Contest AI script index 2
	.4byte ContestAI_CheckExcitement @ Contest AI script index 3
	.4byte ContestAI_CheckOrder @ Contest AI script index 4
	.4byte ContestAI_CheckGoodMove @ Contest AI script index 5
	.4byte ContestAI_Erratic @ Contest AI script index 6
	.4byte ContestAI_Nothing @ Contest AI script index 7
	.4byte ContestAI_Nothing @ Contest AI script index 8
	.4byte ContestAI_Nothing @ Contest AI script index 9
	.4byte ContestAI_Nothing @ Contest AI script index 10
	.4byte ContestAI_Nothing @ Contest AI script index 11
	.4byte ContestAI_Nothing @ Contest AI script index 12
	.4byte ContestAI_Nothing @ Contest AI script index 13
	.4byte ContestAI_Nothing @ Contest AI script index 14
	.4byte ContestAI_Nothing @ Contest AI script index 15
	.4byte ContestAI_Nothing @ Contest AI script index 16
	.4byte ContestAI_Nothing @ Contest AI script index 17
	.4byte ContestAI_Nothing @ Contest AI script index 18
	.4byte ContestAI_Nothing @ Contest AI script index 19
	.4byte ContestAI_Nothing @ Contest AI script index 20
	.4byte ContestAI_Nothing @ Contest AI script index 21
	.4byte ContestAI_Nothing @ Contest AI script index 22
	.4byte ContestAI_Nothing @ Contest AI script index 23
	.4byte ContestAI_Nothing @ Contest AI script index 24
	.4byte ContestAI_Nothing @ Contest AI script index 25
	.4byte ContestAI_Nothing @ Contest AI script index 26
	.4byte ContestAI_Nothing @ Contest AI script index 27
	.4byte ContestAI_Nothing @ Contest AI script index 28
	.4byte ContestAI_Nothing @ Contest AI script index 29
	.4byte ContestAI_Nothing @ Contest AI script index 30
	.4byte ContestAI_Nothing @ Contest AI script index 31
	cai_if_turn_not_eq 0x00, 0x0828C966
	cai_if_effect_not_eq 0x26, 0x0828C966
	cai_score 0x0A
	cai_call 0x0828C96C
	cai_end
	cai_if_user_order_more_than 0x01, 0x0828C980
	cai_if_effect_type_not_eq 0x02, 0x0828C980
	cai_if_effect_type_not_eq 0x03, 0x0828C980
	cai_score 0x0A
	cai_end
	cai_if_turn_eq 0x00, 0x0828C9A0
	cai_if_turn_eq 0x01, 0x0828C9CE
	cai_if_turn_eq 0x02, 0x0828C9E7
	cai_if_turn_eq 0x03, 0x0828CA00
	cai_if_turn_eq 0x04, 0x0828CA19
	cai_end
	cai_if_user_order_not_eq 0x00, 0x0828C9B9
	cai_if_user_order_not_eq 0x01, 0x0828C9C0
	cai_if_user_order_not_eq 0x02, 0x0828C9B9
	cai_if_user_order_not_eq 0x03, 0x0828C9B9
	cai_end
	cai_if_effect_type_eq 0x01, 0x0828CA32
	cai_end
	cai_if_effect_type_eq 0x01, 0x0828CA32
	cai_end
	cai_if_effect_type_eq 0x01, 0x0828CA32
	cai_end
	cai_if_user_order_not_eq 0x00, 0x0828C9B9
	cai_if_user_order_not_eq 0x01, 0x0828C9B9
	cai_if_user_order_not_eq 0x02, 0x0828C9B9
	cai_if_user_order_not_eq 0x03, 0x0828C9B9
	cai_end
	cai_if_user_order_not_eq 0x00, 0x0828C9B9
	cai_if_user_order_not_eq 0x01, 0x0828C9B9
	cai_if_user_order_not_eq 0x02, 0x0828C9B9
	cai_if_user_order_not_eq 0x03, 0x0828C9B9
	cai_end
	cai_if_user_order_not_eq 0x00, 0x0828C9B9
	cai_if_user_order_not_eq 0x01, 0x0828C9B9
	cai_if_user_order_not_eq 0x02, 0x0828C9B9
	cai_if_user_order_not_eq 0x03, 0x0828C9B9
	cai_end
	cai_if_user_order_not_eq 0x00, 0x0828C9B9
	cai_if_user_order_not_eq 0x01, 0x0828C9B9
	cai_if_user_order_not_eq 0x02, 0x0828C9B9
	cai_if_user_order_not_eq 0x03, 0x0828C9B9
	cai_end
	cai_score 0x0A
	cai_end
	cai_end
	cai_if_most_appealing_move 0x0828CA3C
	cai_end
	cai_score 0x0A
	cai_end

ContestAI_CheckBoring: @ 0x0828CA3F
	cai_if_effect_eq 0x03, 0x0828CA6A
	cai_if_move_used_count_eq 0x01, 0x0828CA5E
	cai_if_move_used_count_eq 0x02, 0x0828CA61
	cai_if_move_used_count_eq 0x03, 0x0828CA64
	cai_if_move_used_count_eq 0x04, 0x0828CA67
	cai_end
	cai_score 0xFB
	cai_end
	cai_score 0xF1
	cai_end
	cai_score 0xEC
	cai_end
	cai_score 0xE7
	cai_end
	cai_end

ContestAI_CheckExcitement: @ 0x0828CA6B
	cai_if_move_excitement_less_than 0x00, 0x0828CA7E
	cai_if_move_excitement_eq 0x00, 0x0828CACB
	cai_if_move_excitement_eq 0x01, 0x0828CAD4
	cai_end
	cai_if_excitement_eq 0x04, 0x0828CA92
	cai_if_excitement_eq 0x03, 0x0828CAAA
	cai_if_user_has_exciting_move 0x0828CB07
	cai_score 0x0F
	cai_end
	cai_if_user_order_not_eq 0x00, 0x0828CAA1
	cai_if_random 0x33, 0x0828CB07
	cai_score 0x14
	cai_end
	cai_if_random 0x7F, 0x0828CB07
	cai_score 0xF6
	cai_end
	cai_if_user_order_not_eq 0x00, 0x0828CAC2
	cai_if_turn_eq 0x04, 0x0828CABF
	cai_if_random 0x33, 0x0828CB07
	cai_score 0x0A
	cai_end
	cai_score 0x0F
	cai_end
	cai_if_random 0x7F, 0x0828CB07
	cai_score 0x0A
	cai_end
	cai_if_random 0x7F, 0x0828CB07
	cai_score 0x0A
	cai_end
	cai_if_move_used_count_more_than 0x00, 0x0828CAF2
	cai_if_user_order_not_eq 0x00, 0x0828CAE9
	cai_if_excitement_not_eq 0x04, 0x0828CAE9
	cai_score 0x1E
	cai_end
	cai_if_random 0x64, 0x0828CB07
	cai_score 0x0A
	cai_end
	cai_if_effect_not_eq 0x03, 0x0828CB07
	cai_if_user_order_not_eq 0x00, 0x0828CAE9
	cai_if_excitement_not_eq 0x04, 0x0828CAE9
	cai_score 0x1E
	cai_end
	cai_end

ContestAI_CheckCombo: @ 0x0828CB08
	cai_if_would_finish_combo 0x0828CB44
	cai_call 0x0828CB18
	cai_call 0x0828CB3C
	cai_end
	cai_if_move_used_count_not_eq 0x00, 0x0828CB86
	cai_if_not_combo_starter 0x0828CB86
	cai_if_user_order_eq 0x00, 0x0828CB47
	cai_if_user_order_eq 0x01, 0x0828CB56
	cai_if_user_order_eq 0x02, 0x0828CB65
	cai_if_user_order_eq 0x03, 0x0828CB74
	cai_end
	cai_if_not_combo_finisher 0x0828CB86
	cai_score 0xF6
	cai_end
	cai_score 0x19
	cai_end
	cai_if_turn_eq 0x04, 0x0828CB7D
	cai_if_random 0x96, 0x0828CB86
	cai_score 0x0A
	cai_end
	cai_if_turn_eq 0x04, 0x0828CB7D
	cai_if_random 0x7D, 0x0828CB86
	cai_score 0x0A
	cai_end
	cai_if_turn_eq 0x04, 0x0828CB7D
	cai_if_random 0x32, 0x0828CB86
	cai_score 0x0A
	cai_end
	cai_if_turn_eq 0x04, 0x0828CB7D
	cai_score 0x0A
	cai_end
	cai_if_random 0x7D, 0x0828CB86
	cai_score 0xF1
	cai_end
	cai_end

ContestAI_CheckGoodMove: @ 0x0828CB87
	cai_if_effect_eq 0x27, 0x0828CBDC
	cai_if_effect_eq 0x28, 0x0828CC0D
	cai_if_effect_eq 0x29, 0x0828CC1D
	cai_if_effect_eq 0x03, 0x0828CC2D
	cai_if_effect_eq 0x26, 0x0828CC57
	cai_if_effect_eq 0x2F, 0x0828CC97
	cai_if_effect_eq 0x1F, 0x0828CCC6
	cai_if_effect_eq 0x20, 0x0828CCE2
	cai_if_effect_eq 0x2E, 0x0828CD43
	cai_if_effect_eq 0x1B, 0x0828CD87
	cai_if_effect_eq 0x10, 0x0828CE80
	cai_if_effect_eq 0x11, 0x0828CE80
	cai_if_effect_eq 0x1A, 0x0828CEF2
	cai_if_effect_eq 0x12, 0x0828CF52
	cai_end
	cai_if_user_condition_eq 0x03, 0x0828CBF5
	cai_if_user_condition_eq 0x02, 0x0828CBF8
	cai_if_user_condition_eq 0x01, 0x0828CC01
	cai_if_user_condition_eq 0x00, 0x0828CC0A
	cai_end
	cai_score 0x14
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x0F
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x05
	cai_end
	cai_score 0xEC
	cai_end
	cai_if_effect_in_user_moveset 0x001D, 0x0828CF9D
	cai_if_random 0x32, 0x0828CF9D
	cai_score 0x14
	cai_end
	cai_if_effect_in_user_moveset 0x001E, 0x0828CF9D
	cai_if_random 0x32, 0x0828CF9D
	cai_score 0x14
	cai_end
	cai_if_user_order_not_eq 0x03, 0x0828CF9D
	cai_if_random 0x32, 0x0828CF9D
	cai_score 0x0F
	cai_end
	cai_if_turn_eq 0x04, 0x0828CC4B
	cai_if_random 0xDC, 0x0828CC54
	cai_score 0x0A
	cai_end
	cai_if_random 0x14, 0x0828CF9D
	cai_score 0x0F
	cai_end
	cai_score 0xEC
	cai_end
	cai_if_effect_in_user_moveset 0x0027, 0x0828CC70
	cai_if_user_condition_eq 0x03, 0x0828CC6D
	cai_if_random 0x32, 0x0828CF9D
	cai_score 0x0F
	cai_end
	cai_score 0xF6
	cai_end
	cai_if_turn_eq 0x04, 0x0828CC94
	cai_if_turn_eq 0x00, 0x0828CC8B
	cai_if_move_used_count_eq 0x01, 0x0828CF9D
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x0A
	cai_end
	cai_if_random 0x64, 0x0828CF9D
	cai_score 0x0A
	cai_end
	cai_score 0xF6
	cai_end
	cai_if_move_used_count_eq 0x01, 0x0828CF9D
	cai_if_user_order_eq 0x00, 0x0828CCBD
	cai_if_user_order_eq 0x01, 0x0828CCBD
	cai_if_turn_not_eq 0x04, 0x0828CF9D
	cai_if_user_has_exciting_move 0x0828CF9D
	cai_if_excitement_less_than 0x01, 0x0828CF9D
	cai_score 0x0A
	cai_end
	cai_if_random 0x7F, 0x0828CF9D
	cai_score 0x0A
	cai_end
	cai_if_user_order_eq 0x01, 0x0828CCD9
	cai_if_user_order_eq 0x02, 0x0828CCDC
	cai_if_user_order_eq 0x03, 0x0828CCDF
	cai_end
	cai_score 0x05
	cai_end
	cai_score 0x0F
	cai_end
	cai_score 0x14
	cai_end
	cai_if_user_order_eq 0x00, 0x0828CCFB
	cai_if_user_order_eq 0x01, 0x0828CCFE
	cai_if_user_order_eq 0x02, 0x0828CD07
	cai_if_user_order_eq 0x03, 0x0828CD1E
	cai_end
	cai_score 0xF6
	cai_end
	cai_if_cannot_participate 0x00, 0x0828CF9D
	cai_score 0x05
	cai_end
	cai_if_cannot_participate 0x00, 0x0828CD15
	cai_score 0x05
	cai_jump 0x0828CD15
	cai_end
	cai_if_cannot_participate 0x01, 0x0828CF9D
	cai_score 0x05
	cai_end
	cai_if_cannot_participate 0x00, 0x0828CD2C
	cai_score 0x05
	cai_jump 0x0828CD2C
	cai_end
	cai_if_cannot_participate 0x01, 0x0828CD3A
	cai_score 0x05
	cai_jump 0x0828CD3A
	cai_end
	cai_if_cannot_participate 0x02, 0x0828CF9D
	cai_score 0x05
	cai_end
	cai_if_user_order_eq 0x00, 0x0828CD50
	cai_if_user_order_more_than 0x00, 0x0828CD7E
	cai_end
	cai_if_turn_not_eq 0x00, 0x0828CD63
	cai_if_excitement_eq 0x04, 0x0828CD6C
	cai_if_excitement_eq 0x03, 0x0828CD75
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0xF1
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x14
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x0F
	cai_end
	cai_if_random 0xB2, 0x0828CF9D
	cai_score 0x0A
	cai_end
	cai_if_user_order_eq 0x00, 0x0828CF9D
	cai_jump 0x0828CD93
	cai_end
	cai_if_cannot_participate 0x00, 0x0828CDE3
	cai_if_condition_eq 0x00, 0x00, 0x0828CDE3
	cai_if_condition_eq 0x00, 0x01, 0x0828CDB6
	cai_if_condition_eq 0x00, 0x02, 0x0828CDC5
	cai_if_condition_eq 0x00, 0x03, 0x0828CDD4
	cai_end
	cai_if_random 0x7D, 0x0828CDEA
	cai_score 0x05
	cai_if_user_order_more_than 0x01, 0x0828CDEA
	cai_end
	cai_if_random 0x7D, 0x0828CDEA
	cai_score 0x0A
	cai_if_user_order_more_than 0x01, 0x0828CDEA
	cai_end
	cai_if_random 0x7D, 0x0828CDEA
	cai_score 0x0F
	cai_if_user_order_more_than 0x01, 0x0828CDEA
	cai_end
	cai_if_user_order_more_than 0x01, 0x0828CDEA
	cai_end
	cai_if_cannot_participate 0x01, 0x0828CE3A
	cai_if_condition_eq 0x01, 0x00, 0x0828CE3A
	cai_if_condition_eq 0x01, 0x01, 0x0828CE0D
	cai_if_condition_eq 0x01, 0x02, 0x0828CE1C
	cai_if_condition_eq 0x01, 0x03, 0x0828CE2B
	cai_end
	cai_if_random 0x7D, 0x0828CE41
	cai_score 0x05
	cai_if_user_order_more_than 0x02, 0x0828CE41
	cai_end
	cai_if_random 0x7D, 0x0828CE41
	cai_score 0x0A
	cai_if_user_order_more_than 0x02, 0x0828CE41
	cai_end
	cai_if_random 0x7D, 0x0828CE41
	cai_score 0x0F
	cai_if_user_order_more_than 0x02, 0x0828CE41
	cai_end
	cai_if_user_order_more_than 0x02, 0x0828CE41
	cai_end
	cai_if_cannot_participate 0x02, 0x0828CE7F
	cai_if_condition_eq 0x02, 0x00, 0x0828CE7F
	cai_if_condition_eq 0x02, 0x01, 0x0828CE64
	cai_if_condition_eq 0x02, 0x02, 0x0828CE6D
	cai_if_condition_eq 0x02, 0x03, 0x0828CE76
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x05
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x0A
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x0F
	cai_end
	cai_end
	cai_if_user_order_eq 0x00, 0x0828CF9D
	cai_jump 0x0828CE8C
	cai_end
	cai_if_cannot_participate 0x00, 0x0828CEAA
	cai_if_used_combo_starter_eq 0x00, 0x01, 0x0828CEAA
	cai_if_random 0x7D, 0x0828CEAA
	cai_score 0x02
	cai_contest_58 0x00, 0x0828CEAA
	cai_score 0x08
	cai_end
	cai_if_user_order_eq 0x01, 0x0828CF9D
	cai_if_cannot_participate 0x01, 0x0828CECE
	cai_if_used_combo_starter_eq 0x01, 0x01, 0x0828CECE
	cai_if_random 0x7D, 0x0828CECE
	cai_score 0x02
	cai_contest_58 0x01, 0x0828CECE
	cai_score 0x08
	cai_end
	cai_if_user_order_eq 0x02, 0x0828CF9D
	cai_if_cannot_participate 0x02, 0x0828CF9D
	cai_if_used_combo_starter_eq 0x02, 0x01, 0x0828CF9D
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x02
	cai_contest_58 0x02, 0x0828CF9D
	cai_score 0x08
	cai_end
	cai_if_user_order_eq 0x03, 0x0828CF9D
	cai_jump 0x0828CEFE
	cai_end
	cai_if_cannot_participate 0x03, 0x0828CF16
	cai_if_used_combo_starter_eq 0x03, 0x00, 0x0828CF16
	cai_score 0x05
	cai_if_random 0x7D, 0x0828CEAA
	cai_score 0x05
	cai_end
	cai_if_user_order_eq 0x02, 0x0828CF9D
	cai_if_cannot_participate 0x02, 0x0828CF34
	cai_if_used_combo_starter_eq 0x02, 0x00, 0x0828CF34
	cai_score 0x05
	cai_if_random 0x7D, 0x0828CECE
	cai_score 0x05
	cai_end
	cai_if_user_order_eq 0x01, 0x0828CF9D
	cai_if_cannot_participate 0x01, 0x0828CF9D
	cai_if_used_combo_starter_eq 0x01, 0x00, 0x0828CF9D
	cai_score 0x05
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x05
	cai_end
	cai_if_turn_eq 0x04, 0x0828CF5E
	cai_jump 0x0828CF66
	cai_end
	cai_score 0x05
	cai_jump 0x0828CF66
	cai_end
	cai_if_user_order_eq 0x00, 0x0828CF7F
	cai_if_user_order_eq 0x01, 0x0828CF82
	cai_if_user_order_eq 0x02, 0x0828CF8B
	cai_if_user_order_eq 0x03, 0x0828CF94
	cai_end
	cai_score 0xF1
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0xF6
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x05
	cai_end
	cai_if_random 0x7D, 0x0828CF9D
	cai_score 0x0F
	cai_end
	cai_end

ContestAI_Erratic: @ 0x0828CF9E
	cai_if_contest_type_eq 0x02, 0x0828CFB1
	cai_if_contest_type_eq 0x03, 0x0828CFB1
	cai_if_contest_type_eq 0x04, 0x0828CFB1
	cai_end
	cai_if_random 0x7D, 0x0828CFBA
	cai_score 0x0A
	cai_end
	cai_end

ContestAI_CheckBadMove: @ 0x0828CFBB
	cai_if_effect_eq 0x08, 0x0828D082
	cai_if_effect_eq 0x0A, 0x0828D082
	cai_if_effect_eq 0x0C, 0x0828D082
	cai_if_effect_eq 0x0E, 0x0828D082
	cai_if_effect_eq 0x20, 0x0828D082
	cai_if_effect_eq 0x23, 0x0828D082
	cai_if_effect_eq 0x24, 0x0828D082
	cai_if_effect_eq 0x25, 0x0828D082
	cai_if_effect_eq 0x09, 0x0828D0B9
	cai_if_effect_eq 0x0B, 0x0828D0B9
	cai_if_effect_eq 0x0D, 0x0828D0B9
	cai_if_effect_eq 0x0F, 0x0828D0B9
	cai_if_effect_eq 0x11, 0x0828D0B9
	cai_if_effect_eq 0x10, 0x0828D0B9
	cai_if_effect_eq 0x12, 0x0828D0B9
	cai_if_effect_eq 0x13, 0x0828D0B9
	cai_if_effect_eq 0x2D, 0x0828D0B9
	cai_if_effect_eq 0x14, 0x0828D0B9
	cai_if_effect_eq 0x15, 0x0828D0B9
	cai_if_effect_eq 0x16, 0x0828D0B9
	cai_if_effect_eq 0x17, 0x0828D0B9
	cai_if_effect_eq 0x18, 0x0828D0B9
	cai_if_effect_eq 0x1C, 0x0828D0B9
	cai_if_effect_eq 0x1B, 0x0828D0B9
	cai_if_effect_eq 0x1F, 0x0828D0B9
	cai_if_effect_eq 0x19, 0x0828D102
	cai_if_effect_eq 0x1A, 0x0828D132
	cai_if_effect_eq 0x2F, 0x0828D132
	cai_if_effect_eq 0x26, 0x0828D174
	cai_if_effect_eq 0x04, 0x0828D17D
	cai_if_effect_eq 0x05, 0x0828D17D
	cai_if_effect_eq 0x06, 0x0828D17D
	cai_if_effect_eq 0x02, 0x0828D1BF
	cai_end
	cai_if_user_order_eq 0x00, 0x0828D09B
	cai_if_user_order_eq 0x01, 0x0828D09E
	cai_if_user_order_eq 0x02, 0x0828D0A7
	cai_if_user_order_eq 0x03, 0x0828D0B0
	cai_end
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x00, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x01, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x02, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_user_order_eq 0x00, 0x0828D0D2
	cai_if_user_order_eq 0x01, 0x0828D0D5
	cai_if_user_order_eq 0x02, 0x0828D0DE
	cai_if_user_order_eq 0x03, 0x0828D0ED
	cai_end
	cai_score 0xEC
	cai_end
	cai_if_can_participate 0x00, 0x0828D20B
	cai_score 0xF1
	cai_end
	cai_if_can_participate 0x00, 0x0828D20B
	cai_if_can_participate 0x01, 0x0828D20B
	cai_score 0xF1
	cai_end
	cai_if_can_participate 0x00, 0x0828D20B
	cai_if_can_participate 0x01, 0x0828D20B
	cai_if_can_participate 0x02, 0x0828D20B
	cai_score 0xF1
	cai_end
	cai_if_user_order_eq 0x00, 0x0828D117
	cai_if_user_order_eq 0x01, 0x0828D120
	cai_if_user_order_eq 0x02, 0x0828D129
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x01, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x02, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x03, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_user_order_eq 0x00, 0x0828D147
	cai_if_user_order_eq 0x01, 0x0828D15C
	cai_if_user_order_eq 0x02, 0x0828D16B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x01, 0x0828D20B
	cai_if_can_participate 0x02, 0x0828D20B
	cai_if_can_participate 0x03, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x02, 0x0828D20B
	cai_if_can_participate 0x03, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x03, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_user_condition_less_than 0x03, 0x0828D20B
	cai_score 0xEC
	cai_end
	cai_if_user_order_eq 0x00, 0x0828D192
	cai_if_user_order_eq 0x01, 0x0828D1A7
	cai_if_user_order_eq 0x02, 0x0828D1B6
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x01, 0x0828D20B
	cai_if_can_participate 0x02, 0x0828D20B
	cai_if_can_participate 0x03, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x02, 0x0828D20B
	cai_if_can_participate 0x03, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_can_participate 0x03, 0x0828D20B
	cai_score 0xF6
	cai_end
	cai_if_turn_eq 0x00, 0x0828D1DE
	cai_if_turn_eq 0x01, 0x0828D1E7
	cai_if_turn_eq 0x02, 0x0828D1F0
	cai_if_turn_eq 0x03, 0x0828D1F9
	cai_if_turn_eq 0x04, 0x0828D202
	cai_end
	cai_if_random 0x14, 0x0828D20B
	cai_score 0xF1
	cai_end
	cai_if_random 0x28, 0x0828D20B
	cai_score 0xF1
	cai_end
	cai_if_random 0x3C, 0x0828D20B
	cai_score 0xF1
	cai_end
	cai_if_random 0x50, 0x0828D20B
	cai_score 0xF1
	cai_end
	cai_if_random 0x14, 0x0828D20B
	cai_score 0x14
	cai_end
	cai_end

ContestAI_CheckOrder: @ 0x0828D20C
	cai_if_user_order_eq 0x00, 0x0828D225
	cai_if_user_order_eq 0x01, 0x0828D247
	cai_if_user_order_eq 0x02, 0x0828D260
	cai_if_user_order_eq 0x03, 0x0828D276
	cai_end
	cai_if_effect_eq 0x1D, 0x0828D238
	cai_if_effect_eq 0x21, 0x0828D23B
	cai_if_effect_type_eq 0x01, 0x0828D23E
	cai_end
	cai_score 0x0F
	cai_end
	cai_score 0xF1
	cai_end
	cai_if_random 0x64, 0x0828D20B
	cai_score 0x0A
	cai_end
	cai_if_effect_eq 0x21, 0x0828D254
	cai_if_effect_type_eq 0x01, 0x0828D257
	cai_end
	cai_score 0xFB
	cai_end
	cai_if_random 0x7D, 0x0828D20B
	cai_score 0x0A
	cai_end
	cai_if_effect_eq 0x21, 0x0828D273
	cai_if_effect_eq 0x1F, 0x0828D273
	cai_if_effect_eq 0x01, 0x0828D273
	cai_end
	cai_score 0x05
	cai_end
	cai_if_effect_eq 0x21, 0x0828D2A1
	cai_if_effect_eq 0x1E, 0x0828D2A1
	cai_if_effect_eq 0x1F, 0x0828D2A1
	cai_if_effect_eq 0x01, 0x0828D2A1
	cai_if_effect_eq 0x12, 0x0828D2B0
	cai_if_effect_type_eq 0x01, 0x0828D2A4
	cai_if_effect_type_eq 0x03, 0x0828D2A7
	cai_end
	cai_score 0x0F
	cai_end
	cai_score 0xF6
	cai_end
	cai_if_random 0x7D, 0x0828D20B
	cai_score 0x0A
	cai_end
	cai_score 0x05
	cai_end

ContestAI_Nothing: @ 0x0828D2B3
	cai_end
