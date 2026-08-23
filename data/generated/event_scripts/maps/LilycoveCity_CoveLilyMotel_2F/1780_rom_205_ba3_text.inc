	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:92 LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy
	.globl gText_Rom_205BA3
gText_Rom_205BA3: @ 0x08205BA3
	.string "エニシダ『コンテストに かつための\nせんりゃくを ねるのも\lつよい トレーナーに なるための\lほうほうの ひとつでは あるね{EOS}"
	.if (. - gText_Rom_205BA3) > 0x3f
	.error "gText_Rom_205BA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205BA3) < 0x3f
	.space 0x3f - (. - gText_Rom_205BA3)
	.endif
	@ analyzed canonical ROM range 0x08205BE2-0x08205D74
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205BE2: @ 0x08205BE2
	.byte 0x00
.globl EventScript_JP_08205BE3
EventScript_JP_08205BE3: @ 0x08205BE3
	loadword 0x00, gText_Rom_205D75
	callstd 0x03
	end
.globl EventScript_JP_08205BEC
EventScript_JP_08205BEC: @ 0x08205BEC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte PetalburgCity_Ext_FacePlayer
	message gText_Rom_205DBB
	waitmessage
	multichoice 0x14, 0x08, 0x10, 0x01
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08205C1F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08205C16
	end
EventScript_JP_08205C16: @ 0x08205C16
	loadword 0x00, gText_Rom_205E10
	callstd 0x02
	end
EventScript_JP_08205C1F: @ 0x08205C1F
	loadword 0x00, gText_Rom_205E33
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08205C3E
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08205C48
	end
EventScript_JP_08205C3E: @ 0x08205C3E
	loadword 0x00, gText_Rom_205E63
	callstd 0x03
	releaseall
	end
EventScript_JP_08205C48: @ 0x08205C48
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_205E89
	callstd 0x03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte LilycoveCity_CoveLilyMotel_2F_Movement_WalkUp @ LilycoveCity_CoveLilyMotel_2F_Movement_WalkUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08205C84
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08205C99
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08205CAE
	end
EventScript_JP_08205C84: @ 0x08205C84
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte LilycoveCity_CoveLilyMotel_2F_Movement_WalkUpX2 @ LilycoveCity_CoveLilyMotel_2F_Movement_WalkUpX2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0D
	.byte 0x03
	.byte 0xFF
	.2byte 0x000B
	.2byte 0x0008
	.byte 0x27, 0x02
EventScript_JP_08205C99: @ 0x08205C99
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte LilycoveCity_CoveLilyMotel_2F_Movement_WalkLeft_WalkUp @ LilycoveCity_CoveLilyMotel_2F_Movement_WalkLeft_WalkUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0D
	.byte 0x03
	.byte 0xFF
	.2byte 0x000B
	.2byte 0x0008
	.byte 0x27, 0x02
EventScript_JP_08205CAE: @ 0x08205CAE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte LilycoveCity_CoveLilyMotel_2F_Movement_WalkRight_WalkUp @ LilycoveCity_CoveLilyMotel_2F_Movement_WalkRight_WalkUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0D
	.byte 0x03
	.byte 0xFF
	.2byte 0x000B
	.2byte 0x0008
	.byte 0x27, 0x02
LilycoveCity_CoveLilyMotel_2F_Movement_WalkUp: @ 0x08205CC3
	@ object movement sequence
	walk_up
	step_end
LilycoveCity_CoveLilyMotel_2F_Movement_WalkLeft_WalkUp: @ 0x08205CC5
	@ object movement sequence
	walk_left
	walk_up
	step_end
LilycoveCity_CoveLilyMotel_2F_Movement_WalkRight_WalkUp: @ 0x08205CC8
	@ object movement sequence
	walk_right
	walk_up
	step_end
LilycoveCity_CoveLilyMotel_2F_Movement_WalkUpX2: @ 0x08205CCB
	@ object movement sequence
	walk_up
	walk_up
	step_end
.globl EventScript_JP_08205CCE
EventScript_JP_08205CCE: @ 0x08205CCE
	loadword 0x00, gText_Rom_205EBA
	callstd 0x03
	end
.globl EventScript_JP_08205CD7
EventScript_JP_08205CD7: @ 0x08205CD7
	loadword 0x00, gText_Rom_205EDD
	callstd 0x03
	end
.globl EventScript_JP_08205CE0
EventScript_JP_08205CE0: @ 0x08205CE0
	loadword 0x00, gText_Rom_205EFB
	callstd 0x03
	end
.globl EventScript_JP_08205CE9
EventScript_JP_08205CE9: @ 0x08205CE9
	loadword 0x00, gText_Rom_205F22
	callstd 0x03
	end
.globl EventScript_JP_08205CF2
EventScript_JP_08205CF2: @ 0x08205CF2
	loadword 0x00, gText_Rom_205F45
	callstd 0x03
	end
.globl EventScript_JP_08205CFB
EventScript_JP_08205CFB: @ 0x08205CFB
	loadword 0x00, gText_Rom_205F6E
	callstd 0x03
	end
.globl EventScript_JP_08205D04
EventScript_JP_08205D04: @ 0x08205D04
	loadword 0x00, gText_Rom_205F90
	callstd 0x03
	end
.globl EventScript_JP_08205D0D
EventScript_JP_08205D0D: @ 0x08205D0D
	loadword 0x00, gText_Rom_205FB5
	callstd 0x03
	end
.globl EventScript_JP_08205D16
EventScript_JP_08205D16: @ 0x08205D16
	loadword 0x00, gText_Rom_205FE8
	callstd 0x03
	end
.globl EventScript_JP_08205D1F
EventScript_JP_08205D1F: @ 0x08205D1F
	loadword 0x00, gText_Rom_206021
	callstd 0x02
	end
.globl EventScript_JP_08205D28
EventScript_JP_08205D28: @ 0x08205D28
	loadword 0x00, gText_Rom_20604F
	callstd 0x02
	end
.globl EventScript_JP_08205D31
EventScript_JP_08205D31: @ 0x08205D31
	loadword 0x00, gText_Rom_20609D
	callstd 0x03
	end
.globl EventScript_JP_08205D3A
EventScript_JP_08205D3A: @ 0x08205D3A
	loadword 0x00, gText_Rom_2060B6
	callstd 0x03
	end
.globl EventScript_JP_08205D43
EventScript_JP_08205D43: @ 0x08205D43
	loadword 0x00, gText_Rom_2060D2
	callstd 0x02
	end
.globl EventScript_JP_08205D4C
EventScript_JP_08205D4C: @ 0x08205D4C
	loadword 0x00, gText_Rom_206113
	callstd 0x02
	end
.globl EventScript_JP_08205D55
EventScript_JP_08205D55: @ 0x08205D55
	lock
	faceplayer
	loadword 0x00, gText_Rom_20613F
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
.globl EventScript_JP_08205D6C
EventScript_JP_08205D6C: @ 0x08205D6C
	loadword 0x00, gText_Rom_206184
	callstd 0x02
	end
