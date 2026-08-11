	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:423 MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome
	.globl gText_Rom_20DFB6
gText_Rom_20DFB6: @ 0x0820DFB6
	.string "ダイゴ『ふう あぶない ところ だった\n{PLAYER}{KUN} ありがとう\pちからを かしてくれた おれいに\nいいものを あげるから\lあとで いえまで きておくれ\pボクのいえは カナズミ じゃないよ\nこのしまに あるんだ$"
	.if (. - gText_Rom_20DFB6) > 0x68
	.error "gText_Rom_20DFB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DFB6) < 0x68
	.space 0x68 - (. - gText_Rom_20DFB6)
	.endif
	@ analyzed canonical ROM range 0x0820E01E-0x0820E05C
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820E01E: @ 0x0820E01E
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_0820E038
	.byte 0x04
	.4byte MapScriptTable_JP_0820E02E
	.byte 0x01
	.4byte 0x082468BC
	.byte 0
MapScriptTable_JP_0820E02E: @ 0x0820E02E
	@ conditional map script table
	.2byte 0x4087, 0x0008
	.4byte 0x082468AC
	.2byte 0
MapScriptTable_JP_0820E038: @ 0x0820E038
	@ conditional map script table
	.2byte 0x4087, 0x0008
	.4byte 0x0824699B
	.2byte 0
EventScript_JP_0820E042: @ 0x0820E042
	lock
	faceplayer
	goto 0x08247913
	.byte 0x6C, 0x02
EventScript_JP_0820E04B: @ 0x0820E04B
	lock
	faceplayer
	goto 0x08247970
	.byte 0x6C, 0x02
EventScript_JP_0820E054: @ 0x0820E054
	loadword 0x00, gText_Rom_20E0BA
	callstd 0x03
	end
