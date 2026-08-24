	@ data/maps/LilycoveCity_House2/scripts.inc:21 LilycoveCity_House2_Text_NotAwakeYetHaveThis
	.globl gText_Rom_20A01E
gText_Rom_20A01E: @ 0x0820A01E
	.string "むにゃむにゃ……\pぼく ねぼけて いるから\nこれを あげる……{EOS}"
	.if (. - gText_Rom_20A01E) > 0x20
	.error "gText_Rom_20A01E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A01E) < 0x20
	.space 0x20 - (. - gText_Rom_20A01E)
	.endif
	@ data/maps/LilycoveCity_House2/scripts.inc:24 LilycoveCity_House2_Text_SleepIsEssential
	.globl gText_Rom_20A03E
gText_Rom_20A03E: @ 0x0820A03E
	.string "むにゃむにゃ……\pねる こは そだつ……\nねむって たいりょく かいふく……{EOS}"
	.if (. - gText_Rom_20A03E) > 0x27
	.error "gText_Rom_20A03E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A03E) < 0x27
	.space 0x27 - (. - gText_Rom_20A03E)
	.endif
	@ analyzed canonical ROM range 0x0820A065-0x0820A1C1
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_House3_OnTransition: @ 0x0820A065
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820A06B
	.byte 0
EventScript_JP_0820A06B: @ 0x0820A06B
	random 0x0004
	copyvar 0x4001, 0x800D
	end
.globl EventScript_JP_0820A074
EventScript_JP_0820A074: @ 0x0820A074
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, gText_Rom_20A1C2
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820A09E
	loadword 0x00, gText_Rom_20A278
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_0820A09E: @ 0x0820A09E
	loadword 0x00, gText_Rom_20A24F
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820A0B3
EventScript_JP_0820A0B3: @ 0x0820A0B3
	lock
	faceplayer
	loadword 0x00, gText_Rom_20A44F
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_0820A0CA
EventScript_JP_0820A0CA: @ 0x0820A0CA
	lock
	faceplayer
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820A19A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820A1A4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820A1AE
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820A1B8
	end
.globl EventScript_JP_0820A0FE
EventScript_JP_0820A0FE: @ 0x0820A0FE
	lock
	faceplayer
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820A19A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820A1A4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820A1AE
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820A1B8
	end
.globl EventScript_JP_0820A132
EventScript_JP_0820A132: @ 0x0820A132
	lock
	faceplayer
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820A19A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820A1A4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820A1AE
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820A1B8
	end
.globl EventScript_JP_0820A166
EventScript_JP_0820A166: @ 0x0820A166
	lock
	faceplayer
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820A19A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820A1A4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820A1AE
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820A1B8
	end
EventScript_JP_0820A19A: @ 0x0820A19A
	loadword 0x00, gText_Rom_20A495
	callstd 0x04
	release
	end
EventScript_JP_0820A1A4: @ 0x0820A1A4
	loadword 0x00, gText_Rom_20A4B2
	callstd 0x04
	release
	end
EventScript_JP_0820A1AE: @ 0x0820A1AE
	loadword 0x00, gText_Rom_20A4D3
	callstd 0x04
	release
	end
EventScript_JP_0820A1B8: @ 0x0820A1B8
	loadword 0x00, gText_Rom_20A4F2
	callstd 0x04
	release
	end
