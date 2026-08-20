	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:73 EverGrandeCity_SidneysRoom_Text_PostBattleSpeech
	.globl gText_Rom_21032F
gText_Rom_21032F: @ 0x0821032F
	.string "まけた おれから ひとこと\pおまえなら もっと さきに すすめるぜ\nさあ つぎの へやに いって\lたたかいを たのしんで きなよ!{EOS}"
	.if (. - gText_Rom_21032F) > 0x42
	.error "gText_Rom_21032F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21032F) < 0x42
	.space 0x42 - (. - gText_Rom_21032F)
	.endif
	@ analyzed canonical ROM range 0x08210371-0x0821040A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08210371: @ 0x08210371
MapScripts_JP_08210371: @ 0x08210371
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_082103A7
	.byte 0x04
	.4byte MapScriptTable_JP_08210381
	.byte 0x02
	.4byte MapScriptTable_JP_08210390
	.byte 0
MapScriptTable_JP_08210381: @ 0x08210381
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821038B
	.2byte 0
EventScript_JP_0821038B: @ 0x0821038B
	turnobject 0x00FF, 0x02
	end
MapScriptTable_JP_08210390: @ 0x08210390
	@ conditional map script table
	.2byte 0x409C, 0x0001
	.4byte EventScript_JP_0821039A
	.2byte 0
EventScript_JP_0821039A: @ 0x0821039A
	lockall
	call 0x082434F8
	setvar 0x409C, 0x0002
	releaseall
	end
EventScript_JP_082103A7: @ 0x082103A7
	checkflag 0x04FC
	call_if 0x01, EventScript_JP_082103BC
	compare_var_to_value 0x409C, 0x0002
	call_if 0x01, EventScript_JP_082103C2
	end
EventScript_JP_082103BC: @ 0x082103BC
	call 0x0824353F
	return
EventScript_JP_082103C2: @ 0x082103C2
	call 0x082435E2
	return
.globl EventScript_JP_082103C8
EventScript_JP_082103C8: @ 0x082103C8
	lock
	faceplayer
	checkflag 0x04FC
	goto_if 0x01, EventScript_JP_082103EF
	playbgm 0x01C2, 0x00
	loadword 0x00, gText_Rom_21040B
	callstd 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0106
	.2byte 0x0000
	.4byte gText_Rom_2104AB @ gText_Rom_2104AB
	goto EventScript_JP_082103F9
	.byte 0x02
EventScript_JP_082103EF: @ 0x082103EF
	loadword 0x00, gText_Rom_2104B6
	callstd 0x04
	release
	end
EventScript_JP_082103F9: @ 0x082103F9
	setflag 0x04FC
	call 0x0824347B
	loadword 0x00, gText_Rom_2104B6
	callstd 0x04
	release
	end
