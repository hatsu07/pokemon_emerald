	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:73 EverGrandeCity_SidneysRoom_Text_PostBattleSpeech
	.globl gText_Rom_21032F
gText_Rom_21032F: @ 0x0821032F
	.string "まけた おれから ひとこと\pおまえなら もっと さきに すすめるぜ\nさあ つぎの へやに いって\lたたかいを たのしんで きなよ!$"
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
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08210390: @ 0x08210390
	@ conditional map script table
	.2byte 0x409C, 0x0001
	.4byte EventScript_JP_0821039A
	.2byte 0
EventScript_JP_0821039A: @ 0x0821039A
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x082434F8
	@ event command: setvar
	.byte 0x16
	.2byte 0x409C
	.2byte 0x0002
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082103A7: @ 0x082103A7
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FC
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082103BC @ EventScript_JP_082103BC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082103C2 @ EventScript_JP_082103C2
	@ event command: end
	.byte 0x02
EventScript_JP_082103BC: @ 0x082103BC
	@ event command: call
	.byte 0x04
	.4byte 0x0824353F
	@ event command: return
	.byte 0x03
EventScript_JP_082103C2: @ 0x082103C2
	@ event command: call
	.byte 0x04
	.4byte 0x082435E2
	@ event command: return
	.byte 0x03
EventScript_JP_082103C8: @ 0x082103C8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FC
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082103EF @ EventScript_JP_082103EF
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01C2
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821040B @ gText_Rom_21040B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0106
	.2byte 0x0000
	.4byte 0x082104AB @ gText_Rom_2104AB
	@ event command: goto
	.byte 0x05
	.4byte 0x082103F9 @ EventScript_JP_082103F9
	.byte 0x02
EventScript_JP_082103EF: @ 0x082103EF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082104B6 @ gText_Rom_2104B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082103F9: @ 0x082103F9
	@ event command: setflag
	.byte 0x29
	.2byte 0x04FC
	@ event command: call
	.byte 0x04
	.4byte 0x0824347B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082104B6 @ gText_Rom_2104B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
