	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:145 LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls
	.globl gText_Rom_20AD99
gText_Rom_20AD99: @ 0x0820AD99
	.string "すてきな ぬいぐるみが いっぱい なのねー\nこどものぶん だけじゃ なくて\lあたしのぶんも かおうかしら オホホホホ!{EOS}"
	.if (. - gText_Rom_20AD99) > 0x3c
	.error "gText_Rom_20AD99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20AD99) < 0x3c
	.space 0x3c - (. - gText_Rom_20AD99)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:148 LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon
	.globl gText_Rom_20ADD5
gText_Rom_20ADD5: @ 0x0820ADD5
	.string "あたし まだ ポケモン そだてられないから\nかわいい ぬいぐるみ かってもらうの{EOS}"
	.if (. - gText_Rom_20ADD5) > 0x29
	.error "gText_Rom_20ADD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ADD5) < 0x29
	.space 0x29 - (. - gText_Rom_20ADD5)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:151 LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere
	.globl gText_Rom_20ADFE
gText_Rom_20ADFE: @ 0x0820ADFE
	.string "かわいい マットが たくさん うってるの!\nどれを かおうかな……\lぜーんぶ かっちゃおうかな……{EOS}"
	.if (. - gText_Rom_20ADFE) > 0x32
	.error "gText_Rom_20ADFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ADFE) < 0x32
	.space 0x32 - (. - gText_Rom_20ADFE)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:154 LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather
	.globl gText_Rom_20AE30
gText_Rom_20AE30: @ 0x0820AE30
	.string "いまは てんきが あれてるから\nおくじょうに でられない みたい……{EOS}"
	.if (. - gText_Rom_20AE30) > 0x23
	.error "gText_Rom_20AE30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20AE30) < 0x23
	.space 0x23 - (. - gText_Rom_20AE30)
	.endif
	@ analyzed canonical ROM range 0x0820AE53-0x0820B0AE
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_DepartmentStoreRooftop_OnTransition: @ 0x0820AE53
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820AE59
	.byte 0
EventScript_JP_0820AE59: @ 0x0820AE59
	getpricereduction 0x0003
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0820AE73
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820AE77
	end
EventScript_JP_0820AE73: @ 0x0820AE73
	clearflag 0x03C2
	return
EventScript_JP_0820AE77: @ 0x0820AE77
	setflag 0x03C2
	return
.globl EventScript_JP_0820AE7B
EventScript_JP_0820AE7B: @ 0x0820AE7B
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration 0x0820AE94
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x27, 0x00, 0x23, 0x00, 0x24, 0x00, 0x25, 0x00, 0x28, 0x00, 0x21, 0x00, 0x29, 0x00
	.byte 0x26, 0x00, 0x22, 0x00, 0x2D, 0x00, 0x2E, 0x00, 0x2F, 0x00, 0x75, 0x00, 0x70, 0x00, 0x00, 0x00
	.byte 0x6C, 0x02
.globl EventScript_JP_0820AEB4
EventScript_JP_0820AEB4: @ 0x0820AEB4
	lock
	faceplayer
	getpricereduction 0x0003
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0820AECE
	loadword 0x00, gText_Rom_20B0AF
	callstd 0x04
	release
	end
EventScript_JP_0820AECE: @ 0x0820AECE
	loadword 0x00, gText_Rom_20B0EA
	callstd 0x04
	release
	end
.globl EventScript_JP_0820AED8
EventScript_JP_0820AED8: @ 0x0820AED8
	loadword 0x00, gText_Rom_20B120
	callstd 0x02
	end
.globl EventScript_JP_0820AEE1
EventScript_JP_0820AEE1: @ 0x0820AEE1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	message gText_Rom_20B12E
	waitmessage
	showmoneybox 0x00, 0x00, 0x00
	goto EventScript_JP_0820AEF2
	.byte 0x02
EventScript_JP_0820AEF2: @ 0x0820AEF2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	multichoice 0x10, 0x00, 0x2A, 0x00
	copyvar 0x4001, 0x800D
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820AF30
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820AF3B
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820AF46
	loadword 0x00, gText_Rom_20B180
	callstd 0x04
	goto EventScript_JP_0820B0AA
	.byte 0x02
EventScript_JP_0820AF30: @ 0x0820AF30
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x001A
	goto EventScript_JP_0820AF7B
	.byte 0x02
EventScript_JP_0820AF3B: @ 0x0820AF3B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x001B
	goto EventScript_JP_0820AF7B
	.byte 0x02
EventScript_JP_0820AF46: @ 0x0820AF46
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x001C
	goto EventScript_JP_0820AF7B
	.byte 0x02
EventScript_JP_0820AF51: @ 0x0820AF51
	checkmoney 0x000000C8, 0x00
	return
EventScript_JP_0820AF58: @ 0x0820AF58
	checkmoney 0x0000012C, 0x00
	return
EventScript_JP_0820AF5F: @ 0x0820AF5F
	checkmoney 0x0000015E, 0x00
	return
EventScript_JP_0820AF66: @ 0x0820AF66
	takemoney 0x000000C8, 0x00
	return
EventScript_JP_0820AF6D: @ 0x0820AF6D
	takemoney 0x0000012C, 0x00
	return
EventScript_JP_0820AF74: @ 0x0820AF74
	takemoney 0x0000015E, 0x00
	return
EventScript_JP_0820AF7B: @ 0x0820AF7B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x4001, 0x0000
	call_if 0x01, EventScript_JP_0820AF51
	compare_var_to_value 0x4001, 0x0001
	call_if 0x01, EventScript_JP_0820AF58
	compare_var_to_value 0x4001, 0x0002
	call_if 0x01, EventScript_JP_0820AF5F
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820B08E
	checkitemspace 0x4000, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820B09C
	compare_var_to_value 0x4001, 0x0000
	call_if 0x01, EventScript_JP_0820AF66
	compare_var_to_value 0x4001, 0x0001
	call_if 0x01, EventScript_JP_0820AF6D
	compare_var_to_value 0x4001, 0x0002
	call_if 0x01, EventScript_JP_0820AF74
	updatemoneybox 0x00, 0x00
	nop
	bufferitemname 0x00, 0x4000
	playse 0x006A
	loadword 0x00, gText_Rom_20B14A
	callstd 0x04
	giveitem 0x4000, 0x0001
	bufferitemname 0x01, 0x4000
	bufferstdstring 0x02, 0x000E
	loadword 0x00, gText_PutItemInPocket
	callstd 0x04
	random 0x0040
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0820B082
	checkitemspace 0x4000, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820B09C
	playse 0x006A
	loadword 0x00, gText_Rom_20B159
	callstd 0x04
	giveitem 0x4000, 0x0001
	bufferitemname 0x01, 0x4000
	bufferstdstring 0x02, 0x000E
	loadword 0x00, gText_PutItemInPocket
	callstd 0x04
	random 0x0040
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0820B082
	checkitemspace 0x4000, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820B09C
	playse 0x006A
	loadword 0x00, gText_Rom_20B159
	callstd 0x04
	giveitem 0x4000, 0x0001
	bufferitemname 0x01, 0x4000
	bufferstdstring 0x02, 0x000E
	loadword 0x00, gText_PutItemInPocket
	callstd 0x04
	goto EventScript_JP_0820B082
	.byte 0x02
EventScript_JP_0820B082: @ 0x0820B082
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_20B12E
	waitmessage
	goto EventScript_JP_0820AEF2
	.byte 0x02
EventScript_JP_0820B08E: @ 0x0820B08E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_20B175
	callstd 0x04
	goto EventScript_JP_0820B0AA
	.byte 0x02
EventScript_JP_0820B09C: @ 0x0820B09C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_TheBagIsFull
	callstd 0x04
	goto EventScript_JP_0820B0AA
	.byte 0x02
EventScript_JP_0820B0AA: @ 0x0820B0AA
	hidemoneybox
	nop
	nop
	releaseall
	end
