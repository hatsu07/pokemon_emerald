	@ data/maps/RustboroCity/scripts.inc:1288 RustboroCity_Text_YouCanHave2On2Battle
	.globl gText_Rom_1DFD5D
gText_Rom_1DFD5D: @ 0x081DFD5D
	.string "きみ しってる?\nふたりづれの トレーナーとじゃ なくても\l2たい2の しょうぶが できるんだ!\p2ひき いじょう ポケモンを もってるとき\nふたりの トレーナーと めが あえば\lしょうぶを どうじに いどんで くるよ!\pたった ひとりで ふたりを あいてに\nかてたら カッコいいよねー!$"
	.if (. - gText_Rom_1DFD5D) > 0x91
	.error "gText_Rom_1DFD5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFD5D) < 0x91
	.space 0x91 - (. - gText_Rom_1DFD5D)
	.endif
	@ analyzed canonical ROM range 0x081DFDEE-0x081DFEBF
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_081DFDEE: @ 0x081DFDEE
MapScripts_JP_081DFDEE: @ 0x081DFDEE
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DFDF9
	.byte 0x05
	.4byte EventScript_JP_081DFDFD
	.byte 0
EventScript_JP_081DFDF9: @ 0x081DFDF9
	@ event command: setflag
	.byte 0x29
	.2byte 0x087A
	@ event command: end
	.byte 0x02
EventScript_JP_081DFDFD: @ 0x081DFDFD
	@ event command: setstepcallback
	.byte 0xA6
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE00: @ 0x081DFE00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFEC0 @ gText_Rom_1DFEC0
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE09: @ 0x081DFE09
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0127
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DFE1E @ EventScript_JP_081DFE1E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFF3B @ gText_Rom_1DFF3B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE1E: @ 0x081DFE1E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFF7D @ gText_Rom_1DFF7D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE28: @ 0x081DFE28
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFFA2 @ gText_Rom_1DFFA2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE31: @ 0x081DFE31
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFFEA @ gText_Rom_1DFFEA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE3A: @ 0x081DFE3A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0049 @ gText_Rom_1E0049
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE43: @ 0x081DFE43
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E008B @ gText_Rom_1E008B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE4C: @ 0x081DFE4C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0126 @ gText_Rom_1E0126
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE55: @ 0x081DFE55
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0148 @ gText_Rom_1E0148
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE5E: @ 0x081DFE5E
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0120
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DFE7A @ EventScript_JP_081DFE7A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E00B0 @ gText_Rom_1E00B0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE7A: @ 0x081DFE7A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E00C0 @ gText_Rom_1E00C0
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DFE8F @ EventScript_JP_081DFE8F
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DFE8F: @ 0x081DFE8F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E00E1 @ gText_Rom_1E00E1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824344A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x013D
	.2byte 0x0002
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x081DFEBE @ Movement_JP_081DFEBE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	@ event command: setflag
	.byte 0x29
	.2byte 0x0127
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_081DFEBE: @ 0x081DFEBE
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
