	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:175 MossdeepCity_StevensHouse_Text_CollectionOfRareRocks
	.globl gText_Rom_20CC3F
gText_Rom_20CC3F: @ 0x0820CC3F
	.string "ダイゴの あつめた\nめずらしい いしが かざってある!{EOS}"
	.if (. - gText_Rom_20CC3F) > 0x1c
	.error "gText_Rom_20CC3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CC3F) < 0x1c
	.space 0x1c - (. - gText_Rom_20CC3F)
	.endif
	@ analyzed canonical ROM range 0x0820CC5B-0x0820CCB4
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820CC5B: @ 0x0820CC5B
	.byte 0x00
.globl EventScript_JP_0820CC5C
EventScript_JP_0820CC5C: @ 0x0820CC5C
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820CC71
	loadword 0x00, gText_Rom_20CCB5
	callstd 0x04
	release
	end
EventScript_0820CC71: @ 0x0820CC71
EventScript_JP_0820CC71: @ 0x0820CC71
	loadword 0x00, gText_Rom_20CCDB
	callstd 0x04
	release
	end
.globl EventScript_JP_0820CC7B
EventScript_JP_0820CC7B: @ 0x0820CC7B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	@ event command: special
	.byte 0x25
	.2byte 0x0007
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820CC98
	@ event command: special
	.byte 0x25
	.2byte 0x0116
	loadword 0x00, gText_Rom_20CD10
	callstd 0x04
	release
	end
EventScript_JP_0820CC98: @ 0x0820CC98
	loadword 0x00, gText_Rom_20CD2C
	callstd 0x04
	release
	end
.globl EventScript_JP_0820CCA2
EventScript_JP_0820CCA2: @ 0x0820CCA2
	lock
	faceplayer
	waitse
	playmoncry 0x013B, 0x0000
	loadword 0x00, gText_Rom_20CD53
	callstd 0x04
	waitmoncry
	release
	end
