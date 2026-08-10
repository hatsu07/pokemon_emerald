	@ data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc:82 EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou
	.globl gText_Rom_211531
gText_Rom_211531: @ 0x08211531
	.string "エニシダ『{PLAYER}{KUN}\nついに ポケモンリーグだね!\lわたしも おうえん した かいがあったよ!\pもし {PLAYER}{KUN}が\nポケモンチャンピオンに なったら……\lそのときは また れんらく するからね\pじゃ……\n{PLAYER}{KUN} がんばってね!$"
	.if (. - gText_Rom_211531) > 0x71
	.error "gText_Rom_211531 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211531) < 0x71
	.space 0x71 - (. - gText_Rom_211531)
	.endif
	@ analyzed canonical ROM range 0x082115A2-0x08211731
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082115A2: @ 0x082115A2
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24
	.byte 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03, 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24
	.byte 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08, 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
MapScripts_JP_082115F0: @ 0x082115F0
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082115F6
	.byte 0
EventScript_JP_082115F6: @ 0x082115F6
	@ event command: setflag
	.byte 0x29
	.2byte 0x089D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4090
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08211612 @ EventScript_JP_08211612
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00BC
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0821160E @ EventScript_JP_0821160E
	@ event command: end
	.byte 0x02
EventScript_JP_0821160E: @ 0x0821160E
	@ event command: setflag
	.byte 0x29
	.2byte 0x032E
	@ event command: return
	.byte 0x03
EventScript_JP_08211612: @ 0x08211612
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0009
	.2byte 0x0003
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x32
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x0009
	.2byte 0x0006
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0002
	.byte 0x33
	@ event command: return
	.byte 0x03
EventScript_JP_08211629: @ 0x08211629
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0093
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x0821164C @ EventScript_JP_0821164C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00BD
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082116A3 @ EventScript_JP_082116A3
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0095
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082116BC @ EventScript_JP_082116BC
	@ event command: goto
	.byte 0x05
	.4byte 0x08211670 @ EventScript_JP_08211670
	.byte 0x02
EventScript_JP_0821164C: @ 0x0821164C
	@ event command: setflag
	.byte 0x29
	.2byte 0x0093
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211732 @ gText_Rom_211732
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211749 @ gText_Rom_211749
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082116D5 @ EventScript_JP_082116D5
	@ event command: goto
	.byte 0x05
	.4byte 0x082116E9 @ EventScript_JP_082116E9
	.byte 0x02
EventScript_JP_08211670: @ 0x08211670
	@ event command: message
	.byte 0x67
	.4byte 0x0821192C @ gText_Rom_21192C
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x0E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082116E9 @ EventScript_JP_082116E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082116DF @ EventScript_JP_082116DF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082116DF @ EventScript_JP_082116DF
	@ event command: end
	.byte 0x02
EventScript_JP_082116A3: @ 0x082116A3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821185C @ gText_Rom_21185C
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082116D5 @ EventScript_JP_082116D5
	@ event command: goto
	.byte 0x05
	.4byte 0x082116E9 @ EventScript_JP_082116E9
	.byte 0x02
EventScript_JP_082116BC: @ 0x082116BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082118C7 @ gText_Rom_2118C7
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082116D5 @ EventScript_JP_082116D5
	@ event command: goto
	.byte 0x05
	.4byte 0x082116E9 @ EventScript_JP_082116E9
	.byte 0x02
EventScript_JP_082116D5: @ 0x082116D5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821181B @ gText_Rom_21181B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082116DF: @ 0x082116DF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821195C @ gText_Rom_21195C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082116E9: @ 0x082116E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082117FE @ gText_Rom_2117FE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x08242F21
	@ event command: setvar
	.byte 0x16
	.2byte 0x408E
	.2byte 0x0001
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02E2
	@ event command: setflag
	.byte 0x29
	.2byte 0x02E3
	@ event command: setflag
	.byte 0x29
	.2byte 0x0371
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x4063
	.2byte 0x0002
	@ event command: setflag
	.byte 0x29
	.2byte 0x032E
	@ event command: setflag
	.byte 0x29
	.2byte 0x02CF
	@ event command: warp
	.byte 0x39
	.byte 0x00
	.byte 0x13
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0033
	.byte 0x27, 0x6B, 0x02
EventScript_JP_0821171F: @ 0x0821171F
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0135
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082119A3 @ gText_Rom_2119A3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
