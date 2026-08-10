	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:94 LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner
	.globl gText_Rom_205812
gText_Rom_205812: @ 0x08205812
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pそういえば さっき\nだんたいさん が とうちゃく したよ!\pゲームフリークって いうから\nゲームの かいしゃの ひとたち かなぁ?\lああ ごはんの じゅんびを しなくちゃ……$"
	.if (. - gText_Rom_205812) > 0x75
	.error "gText_Rom_205812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205812) < 0x75
	.space 0x75 - (. - gText_Rom_205812)
	.endif
	@ analyzed canonical ROM range 0x08205887-0x08205928
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08205887: @ 0x08205887
EventScript_08205887: @ 0x08205887
	.byte 0x00
EventScript_JP_08205888: @ 0x08205888
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x082058AE @ EventScript_JP_082058AE
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082058C4 @ EventScript_JP_082058C4
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x014E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082058B7 @ EventScript_JP_082058B7
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_082058AE: @ 0x082058AE
EventScript_JP_082058AE: @ 0x082058AE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205929 @ gText_Rom_205929
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_082058B7: @ 0x082058B7
EventScript_JP_082058B7: @ 0x082058B7
	@ event command: setflag
	.byte 0x29
	.2byte 0x0002
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: waitfanfare
	.byte 0x32
	@ event command: goto
	.byte 0x05
	.4byte 0x082058C4 @ EventScript_JP_082058C4
	.byte 0x02
EventScript_JP_082058C4: @ 0x082058C4
	@ event command: message
	.byte 0x67
	.4byte 0x08205978 @ gText_Rom_205978
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: special
	.byte 0x25
	.2byte 0x0108
	@ event command: waitstate
	.byte 0x27
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082058D5: @ 0x082058D5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082059DF @ gText_Rom_2059DF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082058DE: @ 0x082058DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205A08 @ gText_Rom_205A08
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082058E7: @ 0x082058E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205A27 @ gText_Rom_205A27
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082058F0: @ 0x082058F0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205A85 @ gText_Rom_205A85
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082058F9: @ 0x082058F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205AA6 @ gText_Rom_205AA6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205902: @ 0x08205902
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01CE
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820591F @ EventScript_JP_0820591F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205AE0 @ gText_Rom_205AE0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x01CE
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820591F: @ 0x0820591F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205BA3 @ gText_Rom_205BA3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
