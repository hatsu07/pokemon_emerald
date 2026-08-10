	@ data/maps/EverGrandeCity_PhoebesRoom/scripts.inc:67 EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech
	.globl gText_Rom_2104B6
gText_Rom_2104B6: @ 0x082104B6
	.string "あなたと ポケモンとの あいだにも\nたしかな きずなが あったのね\pそれが わからなかった\nアタシが まけたのは とうぜん\pウン あなたたちの きずなが\nどこまで つうじるか みてみたいな\lつぎの へやに すすみなよ$"
	.if (. - gText_Rom_2104B6) > 0x6d
	.error "gText_Rom_2104B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2104B6) < 0x6d
	.space 0x6d - (. - gText_Rom_2104B6)
	.endif
	@ analyzed canonical ROM range 0x08210523-0x082105BC
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08210523: @ 0x08210523
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_08210542
	.byte 0x01
	.4byte EventScript_JP_08210559
	.byte 0x04
	.4byte MapScriptTable_JP_08210533
	.byte 0
MapScriptTable_JP_08210533: @ 0x08210533
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821053D
	.2byte 0
EventScript_JP_0821053D: @ 0x0821053D
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08210542: @ 0x08210542
	@ conditional map script table
	.2byte 0x409C, 0x0002
	.4byte EventScript_JP_0821054C
	.2byte 0
EventScript_JP_0821054C: @ 0x0821054C
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x082434F8
	@ event command: setvar
	.byte 0x16
	.2byte 0x409C
	.2byte 0x0003
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08210559: @ 0x08210559
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FD
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0821056E @ EventScript_JP_0821056E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08210574 @ EventScript_JP_08210574
	@ event command: end
	.byte 0x02
EventScript_JP_0821056E: @ 0x0821056E
	@ event command: call
	.byte 0x04
	.4byte 0x0824353F
	@ event command: return
	.byte 0x03
EventScript_JP_08210574: @ 0x08210574
	@ event command: call
	.byte 0x04
	.4byte 0x082435E2
	@ event command: return
	.byte 0x03
EventScript_JP_0821057A: @ 0x0821057A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04FD
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082105A1 @ EventScript_JP_082105A1
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01C2
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082105BD @ gText_Rom_2105BD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0107
	.2byte 0x0000
	.4byte 0x0821064B @ gText_Rom_21064B
	@ event command: goto
	.byte 0x05
	.4byte 0x082105AB @ EventScript_JP_082105AB
	.byte 0x02
EventScript_JP_082105A1: @ 0x082105A1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210691 @ gText_Rom_210691
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082105AB: @ 0x082105AB
	@ event command: setflag
	.byte 0x29
	.2byte 0x04FD
	@ event command: call
	.byte 0x04
	.4byte 0x0824347B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210691 @ gText_Rom_210691
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
