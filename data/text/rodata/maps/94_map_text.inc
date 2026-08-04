	@ src/map_name_popup.c:325 sText_Pyramid
	.globl gText_Rom_567D88
gText_Rom_567D88: @ 0x08567D88
	.string "PYRAMID$"
	.if (. - gText_Rom_567D88) > 0x8
	.error "gText_Rom_567D88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_567D88) < 0x8
	.space 0x8 - (. - gText_Rom_567D88)
	.endif
	.incbin "baserom.gba", 0x567d90, 0x568
	.globl gUnknown_85682F8
gUnknown_85682F8: @ 0x085682F8
	.incbin "baserom.gba", 0x5682f8, 0x438
	.globl gUnknown_8568730
gUnknown_8568730: @ 0x08568730
	.incbin "baserom.gba", 0x568730, 0x348
	.globl gUnknown_8568A78
gUnknown_8568A78: @ 0x08568A78
	.incbin "baserom.gba", 0x568a78, 0x1c
	.globl gUnknown_8568A94
gUnknown_8568A94: @ 0x08568A94
	.incbin "baserom.gba", 0x568a94, 0x60
	.globl gUnknown_8568AF4
gUnknown_8568AF4: @ 0x08568AF4
	.4byte gText_Rom_5CA69A
	.4byte ShowRegistryMenuDeleteConfirmation
	.4byte gText_Rom_5C93C4
	.4byte ReturnToMainRegistryMenu
	.globl gUnknown_8568B04
gUnknown_8568B04: @ 0x08568B04
	.4byte sub_080EAD68
	.4byte DeleteRegistry_No
	.globl gUnknown_8568B0C
gUnknown_8568B0C: @ 0x08568B0C
	.incbin "baserom.gba", 0x568b0c, 0xc
	.globl gUnknown_8568B18
gUnknown_8568B18: @ 0x08568B18
	.incbin "baserom.gba", 0x568b18, 0x8
	.globl gUnknown_8568B20
gUnknown_8568B20: @ 0x08568B20
	.incbin "baserom.gba", 0x568b20, 0x8
	.globl gUnknown_8568B28
gUnknown_8568B28: @ 0x08568B28
	.incbin "baserom.gba", 0x568b28, 0x18

	.include "data/wild_encounters/mass_outbreaks.inc"

	.globl gUnknown_8568B7C
gUnknown_8568B7C: @ 0x08568B7C
	.incbin "baserom.gba", 0x568b7c, 0xe
	.globl gUnknown_8568B8A
gUnknown_8568B8A: @ 0x08568B8A
	.incbin "baserom.gba", 0x568b8a, 0xe
	.globl gUnknown_8568B98
gUnknown_8568B98: @ 0x08568B98
	.incbin "baserom.gba", 0x568b98, 0x1c
	.globl gUnknown_8568BB4
gUnknown_8568BB4: @ 0x08568BB4
	.incbin "baserom.gba", 0x568bb4, 0x14
	.globl gUnknown_8568BC8
gUnknown_8568BC8: @ 0x08568BC8
	.4byte NULL
	.4byte gText_Rom_2545D1
	.4byte gText_Rom_2547DA
	.4byte gText_Rom_2549BD
	.4byte gText_Rom_254BE4
	.globl gUnknown_8568BDC
gUnknown_8568BDC: @ 0x08568BDC
	.4byte NULL
	.4byte gText_Rom_254689
	.4byte gText_Rom_254876
	.4byte gText_Rom_254A53
	.4byte gText_Rom_254CBA
	.globl gUnknown_8568BF0
gUnknown_8568BF0: @ 0x08568BF0
	.incbin "baserom.gba", 0x568bf0, 0xc
	.globl gUnknown_8568BFC
gUnknown_8568BFC: @ 0x08568BFC
	.4byte gText_Rom_24D5D8
	.4byte gText_Rom_24D6C9
	.4byte gText_Rom_24D6E1
	.4byte gText_Rom_24D6F0
	.4byte gText_Rom_24D708
	.4byte gText_Rom_24D73F
	.4byte gText_Rom_24D765
	.4byte gText_Rom_24D7AD
	.globl gUnknown_8568C1C
gUnknown_8568C1C: @ 0x08568C1C
	.4byte gText_Rom_24D9C3
	.4byte gText_Rom_24DA62
	.4byte gText_Rom_24DA91
	.4byte gText_Rom_24DAB4
	.4byte gText_Rom_24DADE
	.4byte gText_Rom_24DB03
	.globl gUnknown_8568C34
gUnknown_8568C34: @ 0x08568C34
	.4byte gText_Rom_24D2DC
	.4byte gText_Rom_24D3F6
	.4byte gText_Rom_24D455
	.4byte gText_Rom_24D4AB
	.4byte gText_Rom_24D4FF
	.globl gUnknown_8568C48
gUnknown_8568C48: @ 0x08568C48
	.4byte gText_Rom_24DB69
	.globl gUnknown_8568C4C
gUnknown_8568C4C: @ 0x08568C4C
	.4byte gText_Rom_24EBFF
	.4byte gText_Rom_24EC5E
	.4byte gText_Rom_24EC93
	.4byte gText_Rom_24ECC8
	.4byte gText_Rom_24ED02
	.4byte gText_Rom_24ED2F
	.4byte gText_Rom_24EDA2
	.4byte gText_Rom_24EDE5
	.4byte gText_Rom_24EE22
	.4byte gText_Rom_24EE6B
	.4byte gText_Rom_24EEC6
	.4byte gText_Rom_24EF0C
	.globl gUnknown_8568C7C
gUnknown_8568C7C: @ 0x08568C7C
	.4byte gText_Rom_24EF5E
	.4byte gText_Rom_24EFC6
	.4byte gText_Rom_24F03A
	.4byte gText_Rom_24F09E
	.4byte gText_Rom_24F0D7
	.4byte gText_Rom_24F126
	.4byte gText_Rom_24F1A9
	.4byte gText_Rom_24F1EE
	.4byte gText_Rom_24F20B
	.4byte gText_Rom_24F22E
	.4byte gText_Rom_24F29B
	.4byte gText_Rom_24F2BC
	.4byte gText_Rom_24F3F6
	.globl gUnknown_8568CB0
gUnknown_8568CB0: @ 0x08568CB0
	.4byte gText_Rom_24C754
	.4byte gText_Rom_24C78D
	.4byte gText_Rom_24C7C7
	.4byte gText_Rom_24C806
	.4byte gText_Rom_24C871
	.4byte gText_Rom_24C8E3
	.4byte gText_Rom_24C95F
	.4byte gText_Rom_24C980
	.4byte gText_Rom_24C9CB
	.globl gUnknown_8568CD4
gUnknown_8568CD4: @ 0x08568CD4
	.4byte gText_Rom_24DC33
	.4byte gText_Rom_24DCC3
	.4byte gText_Rom_24DD25
	.4byte gText_Rom_24DD65
	.4byte gText_Rom_24DDB6
	.4byte gText_Rom_24DDF0
	.globl gUnknown_8568CEC
gUnknown_8568CEC: @ 0x08568CEC
	.4byte gText_Rom_24CBE0
	.4byte gText_Rom_24CC34
	.4byte gText_Rom_24CC59
	.4byte gText_Rom_24CCCF
	.4byte gText_Rom_24CD3E
	.4byte gText_Rom_24CDB0
	.4byte gText_Rom_24CE1D
	.4byte gText_Rom_24CE86
	.4byte gText_Rom_24CE89
	.4byte gText_Rom_24CE8C
	.4byte gText_Rom_24CE8F
	.4byte gText_Rom_24CE92
	.4byte gText_Rom_24CEA0
	.4byte gText_Rom_24CF03
	.4byte gText_Rom_24CF5D
	.globl gUnknown_8568D28
gUnknown_8568D28: @ 0x08568D28
	.4byte gText_Rom_252520
	.4byte gText_Rom_25261B
	.4byte gText_Rom_252651
	.4byte gText_Rom_252689
	.4byte gText_Rom_2526CB
	.4byte gText_Rom_2526FE
	.4byte gText_Rom_25273B
	.4byte gText_Rom_25276B
	.4byte gText_Rom_252791
	.4byte gText_Rom_2527B1
	.4byte gText_Rom_2527C1
	.4byte gText_Rom_2527D0
	.4byte gText_Rom_2527DE
	.4byte gText_Rom_2527ED
	.4byte gText_Rom_2527FD
	.4byte gText_Rom_25281D
	.4byte gText_Rom_25282F
	.4byte gText_Rom_252841
	.4byte gText_Rom_252852
	.4byte gText_Rom_252863
	.4byte gText_Rom_252875
	.4byte gText_Rom_2528B7
	.4byte gText_Rom_2528FF
	.4byte gText_Rom_252934
	.4byte gText_Rom_252996
	.4byte gText_Rom_2529D8
	.4byte gText_Rom_252A17
	.4byte gText_Rom_252A79
	.4byte gText_Rom_252ADD
	.4byte gText_Rom_252B34
	.4byte gText_Rom_252B8A
	.4byte gText_Rom_252BEF
	.4byte gText_Rom_252C41
	.globl gUnknown_8568DAC
gUnknown_8568DAC: @ 0x08568DAC
	.4byte gText_Rom_252CAB
	.4byte gText_Rom_252CDF
	.4byte gText_Rom_252D07
	.4byte gText_Rom_252D2C
	.4byte gText_Rom_252D51
	.4byte gText_Rom_252DAB
	.4byte gText_Rom_252DE4
	.4byte gText_Rom_252E0D
	.globl gUnknown_8568DCC
gUnknown_8568DCC: @ 0x08568DCC
	.4byte gText_Rom_24DF59
	.4byte gText_Rom_24E05F
	.4byte gText_Rom_24E093
	.4byte gText_Rom_24E0C3
	.4byte gText_Rom_24E0F9
	.4byte gText_Rom_24E12A
	.globl gUnknown_8568DE4
gUnknown_8568DE4: @ 0x08568DE4
	.4byte gText_Rom_24E178
	.4byte gText_Rom_24E220
	.4byte gText_Rom_24E269
	.4byte gText_Rom_24E2AC
	.4byte gText_Rom_24E2F7
	.4byte gText_Rom_24E33E
	.4byte gText_Rom_24E37B
	.4byte gText_Rom_24E3B7
	.4byte gText_Rom_24E3FD
	.4byte gText_Rom_24E442
	.4byte gText_Rom_24E495
	.4byte gText_Rom_24E4E6
	.4byte gText_Rom_24E534
	.4byte gText_Rom_24E551
	.4byte gText_Rom_24E589
	.4byte gText_Rom_24E5A9
	.4byte gText_Rom_24E5CD
	.4byte gText_Rom_24E5E9
	.4byte gText_Rom_24E62F
	.globl gUnknown_8568E30
gUnknown_8568E30: @ 0x08568E30
	.4byte gText_Rom_253829
	.4byte gText_Rom_253900
	.4byte gText_Rom_253A06
	.4byte gText_Rom_253B1B
	.globl gUnknown_8568E40
gUnknown_8568E40: @ 0x08568E40
	.4byte gText_Rom_24E938
	.4byte gText_Rom_24E997
	.4byte gText_Rom_24EA19
	.4byte gText_Rom_24EA77
	.4byte gText_Rom_24EAE3
	.4byte gText_Rom_24EB31
	.4byte gText_Rom_24EB89
	.globl gUnknown_8568E5C
gUnknown_8568E5C: @ 0x08568E5C
	.4byte gText_Rom_24E687
	.4byte gText_Rom_24E7F9
	.globl gUnknown_8568E64
gUnknown_8568E64: @ 0x08568E64
	.4byte gText_Rom_24F46B
	.4byte gText_Rom_24F531
	.4byte gText_Rom_24F563
	.globl gUnknown_8568E70
gUnknown_8568E70: @ 0x08568E70
	.4byte gText_Rom_24F5D7
	.4byte gText_Rom_24F751
	.4byte gText_Rom_24F769
	.4byte gText_Rom_24F785
	.4byte gText_Rom_24F7AA
	.4byte gText_Rom_24F7E6
	.4byte gText_Rom_24F811
	.4byte gText_Rom_24F62D
	.4byte gText_Rom_24F677
	.4byte gText_Rom_24F6C4
	.4byte gText_Rom_24F703
	.globl gUnknown_8568E9C
gUnknown_8568E9C: @ 0x08568E9C
	.4byte gText_Rom_24F86A
	.4byte gText_Rom_24F970
	.4byte gText_Rom_24F99E
	.4byte gText_Rom_24F9CD
	.4byte gText_Rom_24FA41
	.4byte gText_Rom_24FA69
	.4byte gText_Rom_24FA92
	.globl gUnknown_8568EB8
gUnknown_8568EB8: @ 0x08568EB8
	.4byte gText_Rom_24FADF
	.4byte gText_Rom_24FB54
	.4byte gText_Rom_24FC02
	.globl gUnknown_8568EC4
gUnknown_8568EC4: @ 0x08568EC4
	.4byte gText_Rom_24FCB4
	.4byte gText_Rom_24FD2E
	.4byte gText_Rom_24FDE9
	.4byte gText_Rom_24FE46
	.globl gUnknown_8568ED4
gUnknown_8568ED4: @ 0x08568ED4
	.4byte gText_Rom_24FEAB
	.4byte gText_Rom_24FEBF
	.4byte gText_Rom_24FF11
	.4byte gText_Rom_24FF3B
	.4byte gText_Rom_24FF60
	.4byte gText_Rom_24FFDA
	.4byte gText_Rom_25002A
	.4byte gText_Rom_25004D
	.4byte gText_Rom_2500D0
	.4byte gText_Rom_2500FF
	.4byte gText_Rom_250156
	.4byte gText_Rom_2501A3
	.4byte gText_Rom_250080
	.globl gUnknown_8568F08
gUnknown_8568F08: @ 0x08568F08
	.4byte gText_Rom_2501F0
	.4byte gText_Rom_250275
	.4byte gText_Rom_250295
	.4byte gText_Rom_2502F9
	.4byte gText_Rom_250321
	.4byte gText_Rom_25035A
	.4byte gText_Rom_250385
	.4byte gText_Rom_2503AC
	.4byte gText_Rom_2503E9
	.4byte gText_Rom_250428
	.4byte gText_Rom_2504A8
	.4byte gText_Rom_25051D
	.4byte gText_Rom_250598
	.4byte gText_Rom_250612
	.globl gUnknown_8568F40
gUnknown_8568F40: @ 0x08568F40
	.4byte gText_Rom_250670
	.globl gUnknown_8568F44
gUnknown_8568F44: @ 0x08568F44
	.4byte gText_Rom_25078E
	.4byte gText_Rom_2507FC
	.4byte gText_Rom_250830
	.4byte gText_Rom_25083C
	.4byte gText_Rom_250858
	.4byte gText_Rom_25086F
	.4byte gText_Rom_250881
	.globl gUnknown_8568F60
gUnknown_8568F60: @ 0x08568F60
	.4byte gText_Rom_2508F1
	.4byte gText_Rom_25099F
	.4byte gText_Rom_2509C2
	.4byte gText_Rom_2509DA
	.4byte gText_Rom_2509FA
	.4byte gText_Rom_250A17
	.4byte gText_Rom_250A35
	.4byte gText_Rom_250A56
	.4byte gText_Rom_250A72
	.4byte gText_Rom_250A94
	.4byte gText_Rom_250AAD
	.4byte gText_Rom_250ACC
	.globl gUnknown_8568F90
gUnknown_8568F90: @ 0x08568F90
	.4byte gText_Rom_250C08
	.4byte gText_Rom_250C96
	.4byte gText_Rom_250CC8
	.4byte gText_Rom_250D03
	.4byte gText_Rom_250D41
	.4byte gText_Rom_250D5F
	.4byte gText_Rom_250DC3
	.4byte gText_Rom_250E25
	.4byte gText_Rom_250E8B
	.4byte gText_Rom_250EED
	.4byte gText_Rom_250F51
	.4byte gText_Rom_250FB5
	.4byte gText_Rom_251014
	.4byte gText_Rom_251079
	.4byte gText_Rom_2510DD
	.4byte gText_Rom_25113A
	.globl gUnknown_8568FD0
gUnknown_8568FD0: @ 0x08568FD0
	.4byte gText_Rom_251173
	.4byte gText_Rom_2511AF
	.4byte gText_Rom_2511F3
	.4byte gText_Rom_251236
	.4byte gText_Rom_251279
	.4byte gText_Rom_2512C1
	.4byte gText_Rom_251306
	.4byte gText_Rom_25134A
	.4byte gText_Rom_251392
	.4byte gText_Rom_2513D9
	.4byte gText_Rom_25141B
	.4byte gText_Rom_25145F
	.4byte gText_Rom_2514A3
	.4byte gText_Rom_2514E6
	.4byte gText_Rom_25152D
	.4byte gText_Rom_25155E
	.4byte gText_Rom_25158B
	.4byte gText_Rom_251597
	.4byte gText_Rom_2515C4
	.globl gUnknown_856901C
gUnknown_856901C: @ 0x0856901C
	.4byte gText_Rom_2515FE
	.4byte gText_Rom_25167C
	.4byte gText_Rom_2516E4
	.4byte gText_Rom_251756
	.4byte gText_Rom_2517CA
	.4byte gText_Rom_251831
	.4byte gText_Rom_2518A5
	.4byte gText_Rom_2518EF
	.4byte gText_Rom_251968
	.globl gUnknown_8569040
gUnknown_8569040: @ 0x08569040
	.4byte gText_Rom_2519B9
	.4byte gText_Rom_251A3A
	.4byte gText_Rom_251A46
	.4byte gText_Rom_251A54
	.4byte gText_Rom_251A83
	.4byte gText_Rom_251AB6
	.4byte gText_Rom_251ADA
	.4byte gText_Rom_251AFA
	.4byte gText_Rom_251B4E
	.4byte gText_Rom_251B8B
	.4byte gText_Rom_251BBB
	.4byte gText_Rom_251BEA
	.4byte gText_Rom_251C16
	.4byte gText_Rom_251C54
	.4byte gText_Rom_251C80
	.4byte gText_Rom_251CA3
	.4byte gText_Rom_251CC0
	.4byte gText_Rom_251CF3
	.4byte gText_Rom_251D12
	.4byte gText_Rom_251D30
	.4byte gText_Rom_251D8E
	.4byte gText_Rom_251D9C
	.4byte gText_Rom_251DBD
	.4byte gText_Rom_251DDC
	.4byte gText_Rom_251E17
	.4byte gText_Rom_251E53
	.4byte gText_Rom_251EB2
	.4byte gText_Rom_251EEC
	.4byte gText_Rom_251F16
	.4byte gText_Rom_251F5B
	.4byte gText_Rom_251F83
	.4byte gText_Rom_251FB6
	.4byte gText_Rom_251FF9
	.4byte gText_Rom_252030
	.4byte gText_Rom_252069
	.4byte gText_Rom_252096
	.4byte gText_Rom_2520C8
	.4byte gText_Rom_252101
	.4byte gText_Rom_252137
	.4byte gText_Rom_252155
	.4byte gText_Rom_252177
	.4byte gText_Rom_2521A5
	.4byte gText_Rom_2521E8
	.globl gUnknown_85690EC
gUnknown_85690EC: @ 0x085690EC
	.4byte gText_Rom_252232
	.4byte gText_Rom_2522C6
	.4byte gText_Rom_252308
	.4byte gText_Rom_252323
	.4byte gText_Rom_25234E
	.4byte gText_Rom_252394
	.4byte gText_Rom_2523E0
	.4byte gText_Rom_25242B
	.4byte gText_Rom_25245F
	.4byte gText_Rom_25248E
	.4byte gText_Rom_2524D7
	.globl gUnknown_8569118
gUnknown_8569118: @ 0x08569118
	.4byte gText_Rom_2533DD
	.4byte gText_Rom_253465
	.4byte gText_Rom_2534BA
	.4byte gText_Rom_253551
	.4byte gText_Rom_2535D3
	.4byte gText_Rom_25365E
	.4byte gText_Rom_2536D3
	.4byte gText_Rom_253714
	.4byte gText_Rom_25377E
	.globl gUnknown_856913C
gUnknown_856913C: @ 0x0856913C
	.incbin "baserom.gba", 0x56913c, 0x20
	.globl gUnknown_856915C
gUnknown_856915C: @ 0x0856915C
	.incbin "baserom.gba", 0x56915c, 0x20
	.globl gUnknown_856917C
gUnknown_856917C: @ 0x0856917C
	.incbin "baserom.gba", 0x56917c, 0x20
	.globl gUnknown_856919C
gUnknown_856919C: @ 0x0856919C
	.incbin "baserom.gba", 0x56919c, 0xa0
	.globl gUnknown_856923C
gUnknown_856923C: @ 0x0856923C
	.incbin "baserom.gba", 0x56923c, 0x68
	.globl gUnknown_85692A4
gUnknown_85692A4: @ 0x085692A4
	.incbin "baserom.gba", 0x5692a4, 0x18
	.globl gUnknown_85692BC
gUnknown_85692BC: @ 0x085692BC
	.incbin "baserom.gba", 0x5692bc, 0x40
	.globl gUnknown_85692FC
gUnknown_85692FC: @ 0x085692FC
	.incbin "baserom.gba", 0x5692fc, 0x10
	.globl gUnknown_856930C
gUnknown_856930C: @ 0x0856930C
	.incbin "baserom.gba", 0x56930c, 0x18
	.globl gUnknown_8569324
gUnknown_8569324: @ 0x08569324
	.incbin "baserom.gba", 0x569324, 0x8
	.globl gUnknown_856932C
gUnknown_856932C: @ 0x0856932C
	.incbin "baserom.gba", 0x56932c, 0x8
	.globl gUnknown_8569334
gUnknown_8569334: @ 0x08569334
	.incbin "baserom.gba", 0x569334, 0x20
	.globl gUnknown_8569354
gUnknown_8569354: @ 0x08569354
	.incbin "baserom.gba", 0x569354, 0x20
	.globl gUnknown_8569374
gUnknown_8569374: @ 0x08569374
	.incbin "baserom.gba", 0x569374, 0x20
	.globl gUnknown_8569394
gUnknown_8569394: @ 0x08569394
	.incbin "baserom.gba", 0x569394, 0x20
	.globl gUnknown_85693B4
gUnknown_85693B4: @ 0x085693B4
	.incbin "baserom.gba", 0x5693b4, 0x20
	.globl gUnknown_85693D4
gUnknown_85693D4: @ 0x085693D4
	.incbin "baserom.gba", 0x5693d4, 0x14
	.globl gUnknown_85693E8
gUnknown_85693E8: @ 0x085693E8
	.incbin "baserom.gba", 0x5693e8, 0x14
	.globl gUnknown_85693FC
gUnknown_85693FC: @ 0x085693FC
	.incbin "baserom.gba", 0x5693fc, 0x14
	.globl gUnknown_8569410
gUnknown_8569410: @ 0x08569410
	.incbin "baserom.gba", 0x569410, 0x14
	.globl gUnknown_8569424
gUnknown_8569424: @ 0x08569424
	.incbin "baserom.gba", 0x569424, 0x14
	.globl gUnknown_8569438
gUnknown_8569438: @ 0x08569438
	.incbin "baserom.gba", 0x569438, 0x14
	.globl gUnknown_856944C
gUnknown_856944C: @ 0x0856944C
	.incbin "baserom.gba", 0x56944c, 0x10
	.globl gUnknown_856945C
gUnknown_856945C: @ 0x0856945C
	.incbin "baserom.gba", 0x56945c, 0x50
	.globl gUnknown_85694AC
gUnknown_85694AC: @ 0x085694AC
	.incbin "baserom.gba", 0x5694ac, 0x18
	.globl gUnknown_85694C4
gUnknown_85694C4: @ 0x085694C4
	.incbin "baserom.gba", 0x5694c4, 0x8
	.globl gUnknown_85694CC
gUnknown_85694CC: @ 0x085694CC
	.incbin "baserom.gba", 0x5694cc, 0x4
	.globl gUnknown_85694D0
gUnknown_85694D0: @ 0x085694D0
	.incbin "baserom.gba", 0x5694d0, 0x80
	.globl gUnknown_8569550
gUnknown_8569550: @ 0x08569550
	.incbin "baserom.gba", 0x569550, 0x2
	.globl gUnknown_8569552
gUnknown_8569552: @ 0x08569552
	.incbin "baserom.gba", 0x569552, 0xc92
	.globl gUnknown_856A1E4
gUnknown_856A1E4: @ 0x0856A1E4
	.incbin "baserom.gba", 0x56a1e4, 0x18
	.globl gUnknown_856A1FC
gUnknown_856A1FC: @ 0x0856A1FC
	.incbin "baserom.gba", 0x56a1fc, 0x18
	.globl gUnknown_856A214
gUnknown_856A214: @ 0x0856A214
	.incbin "baserom.gba", 0x56a214, 0x5c
	.globl gUnknown_856A270
gUnknown_856A270: @ 0x0856A270
	.incbin "baserom.gba", 0x56a270, 0x1d8
	.globl gUnknown_856A448
gUnknown_856A448: @ 0x0856A448
	.incbin "baserom.gba", 0x56a448, 0x1c
	.globl gUnknown_856A464
gUnknown_856A464: @ 0x0856A464
	.incbin "baserom.gba", 0x56a464, 0x18
	.globl gUnknown_856A47C
gUnknown_856A47C: @ 0x0856A47C
	.incbin "baserom.gba", 0x56a47c, 0x13
	.globl gUnknown_856A48F
gUnknown_856A48F: @ 0x0856A48F
	.incbin "baserom.gba", 0x56a48f, 0x2
	.globl gUnknown_856A491
gUnknown_856A491: @ 0x0856A491
	.incbin "baserom.gba", 0x56a491, 0x3
	.globl gUnknown_856A494
gUnknown_856A494: @ 0x0856A494
	.incbin "baserom.gba", 0x56a494, 0x40
	.globl gUnknown_856A4D4
gUnknown_856A4D4: @ 0x0856A4D4
	.incbin "baserom.gba", 0x56a4d4, 0x3468
	.globl gUnknown_856D93C
gUnknown_856D93C: @ 0x0856D93C
	.incbin "baserom.gba", 0x56d93c, 0x270
	.globl gUnknown_856DBAC
gUnknown_856DBAC: @ 0x0856DBAC
	.incbin "baserom.gba", 0x56dbac, 0x18
	.globl gUnknown_856DBC4
gUnknown_856DBC4: @ 0x0856DBC4
	.incbin "baserom.gba", 0x56dbc4, 0x18
	.globl gUnknown_856DBDC
gUnknown_856DBDC: @ 0x0856DBDC
	.incbin "baserom.gba", 0x56dbdc, 0x10
	.globl gUnknown_856DBEC
gUnknown_856DBEC: @ 0x0856DBEC
	.incbin "baserom.gba", 0x56dbec, 0x10
	.globl gUnknown_856DBFC
gUnknown_856DBFC: @ 0x0856DBFC
	.incbin "baserom.gba", 0x56dbfc, 0x10
	.globl gUnknown_856DC0C
gUnknown_856DC0C: @ 0x0856DC0C
	.incbin "baserom.gba", 0x56dc0c, 0x10
	.globl gUnknown_856DC1C
gUnknown_856DC1C: @ 0x0856DC1C
	.incbin "baserom.gba", 0x56dc1c, 0x20
	.globl gUnknown_856DC3C
gUnknown_856DC3C: @ 0x0856DC3C
	.incbin "baserom.gba", 0x56dc3c, 0x20
	.globl gUnknown_856DC5C
gUnknown_856DC5C: @ 0x0856DC5C
	.incbin "baserom.gba", 0x56dc5c, 0x60
	.globl gUnknown_856DCBC
gUnknown_856DCBC: @ 0x0856DCBC
	.4byte sub_081B5E1C
	.4byte CB2_ReturnToField
	.4byte NULL
	.globl gUnknown_856DCC8
gUnknown_856DCC8: @ 0x0856DCC8
	.incbin "baserom.gba", 0x56dcc8, 0x4
	.globl gUnknown_856DCCC
gUnknown_856DCCC: @ 0x0856DCCC
	.incbin "baserom.gba", 0x56dccc, 0x128
	.globl gUnknown_856DDF4
gUnknown_856DDF4: @ 0x0856DDF4
	.incbin "baserom.gba", 0x56ddf4, 0x4f0
	.globl gUnknown_856E2E4
gUnknown_856E2E4: @ 0x0856E2E4
	.incbin "baserom.gba", 0x56e2e4, 0x78
	.globl gUnknown_856E35C
gUnknown_856E35C: @ 0x0856E35C
	.incbin "baserom.gba", 0x56e35c, 0x100
	.globl gUnknown_856E45C
gUnknown_856E45C: @ 0x0856E45C
	.incbin "baserom.gba", 0x56e45c, 0x458
	.globl gUnknown_856E8B4
gUnknown_856E8B4: @ 0x0856E8B4
	.incbin "baserom.gba", 0x56e8b4, 0x1ec
	.globl gUnknown_856EAA0
gUnknown_856EAA0: @ 0x0856EAA0
	.incbin "baserom.gba", 0x56eaa0, 0x30
	.globl gUnknown_856EAD0
gUnknown_856EAD0: @ 0x0856EAD0
	.incbin "baserom.gba", 0x56ead0, 0x134
	.globl gUnknown_856EC04
gUnknown_856EC04: @ 0x0856EC04
	.incbin "baserom.gba", 0x56ec04, 0xf4
	.globl gUnknown_856ECF8
gUnknown_856ECF8: @ 0x0856ECF8
	.incbin "baserom.gba", 0x56ecf8, 0x29c
	.globl gUnknown_856EF94
gUnknown_856EF94: @ 0x0856EF94
	.incbin "baserom.gba", 0x56ef94, 0xf0
	.globl gUnknown_856F084
gUnknown_856F084: @ 0x0856F084
	.incbin "baserom.gba", 0x56f084, 0x148
	.globl gUnknown_856F1CC
gUnknown_856F1CC: @ 0x0856F1CC
	.incbin "baserom.gba", 0x56f1cc, 0x20
	.globl gUnknown_856F1EC
gUnknown_856F1EC: @ 0x0856F1EC
	.incbin "baserom.gba", 0x56f1ec, 0x9c
	.globl gUnknown_856F288
gUnknown_856F288: @ 0x0856F288
	.incbin "baserom.gba", 0x56f288, 0x20c
	.globl gUnknown_856F494
gUnknown_856F494: @ 0x0856F494
	.incbin "baserom.gba", 0x56f494, 0x2c
	.globl gUnknown_856F4C0
gUnknown_856F4C0: @ 0x0856F4C0
	.incbin "baserom.gba", 0x56f4c0, 0x18
	.globl gUnknown_856F4D8
gUnknown_856F4D8: @ 0x0856F4D8
	.incbin "baserom.gba", 0x56f4d8, 0x5c
	.globl gUnknown_856F534
gUnknown_856F534: @ 0x0856F534
	.incbin "baserom.gba", 0x56f534, 0x38
	.globl gUnknown_856F56C
gUnknown_856F56C: @ 0x0856F56C
	.incbin "baserom.gba", 0x56f56c, 0x210
	.globl gUnknown_856F77C
gUnknown_856F77C: @ 0x0856F77C
	.incbin "baserom.gba", 0x56f77c, 0x1488
	.globl gUnknown_8570C04
gUnknown_8570C04: @ 0x08570C04
	.incbin "baserom.gba", 0x570c04, 0x248
	.globl gUnknown_8570E4C
gUnknown_8570E4C: @ 0x08570E4C
	.incbin "baserom.gba", 0x570e4c, 0xa8
	.globl gUnknown_8570EF4
gUnknown_8570EF4: @ 0x08570EF4
	.incbin "baserom.gba", 0x570ef4, 0x2a4
	.globl gUnknown_8571198
gUnknown_8571198: @ 0x08571198
	.incbin "baserom.gba", 0x571198, 0x18
	.globl gUnknown_85711B0
gUnknown_85711B0: @ 0x085711B0
	.incbin "baserom.gba", 0x5711b0, 0x2
	.globl gUnknown_85711B2
gUnknown_85711B2: @ 0x085711B2
	.incbin "baserom.gba", 0x5711b2, 0xb6
	.globl gUnknown_8571268
gUnknown_8571268: @ 0x08571268
	.incbin "baserom.gba", 0x571268, 0x10
	.globl gUnknown_8571278
gUnknown_8571278: @ 0x08571278
	.incbin "baserom.gba", 0x571278, 0x2c
	.globl gUnknown_85712A4
gUnknown_85712A4: @ 0x085712A4
	.incbin "baserom.gba", 0x5712a4, 0x168
	.globl gUnknown_857140C
gUnknown_857140C: @ 0x0857140C
	.incbin "baserom.gba", 0x57140c, 0x18
	.globl gUnknown_8571424
gUnknown_8571424: @ 0x08571424
	.incbin "baserom.gba", 0x571424, 0x18
	.globl gUnknown_857143C
gUnknown_857143C: @ 0x0857143C
	.incbin "baserom.gba", 0x57143c, 0x50
	.globl gUnknown_857148C
gUnknown_857148C: @ 0x0857148C
	.incbin "baserom.gba", 0x57148c, 0x158
	.globl gUnknown_85715E4
gUnknown_85715E4: @ 0x085715E4
	.incbin "baserom.gba", 0x5715e4, 0x30
	.globl gUnknown_8571614
gUnknown_8571614: @ 0x08571614
	.incbin "baserom.gba", 0x571614, 0x138
	.globl gUnknown_857174C
gUnknown_857174C: @ 0x0857174C
	.incbin "baserom.gba", 0x57174c, 0xf4
	.globl gUnknown_8571840
gUnknown_8571840: @ 0x08571840
	.incbin "baserom.gba", 0x571840, 0x2c
	.globl gUnknown_857186C
gUnknown_857186C: @ 0x0857186C
	.incbin "baserom.gba", 0x57186c, 0x2c
	.globl gUnknown_8571898
gUnknown_8571898: @ 0x08571898
	.incbin "baserom.gba", 0x571898, 0x78
	.globl gUnknown_8571910
gUnknown_8571910: @ 0x08571910
	.incbin "baserom.gba", 0x571910, 0xa14
	.globl gUnknown_8572324
gUnknown_8572324: @ 0x08572324
	.incbin "baserom.gba", 0x572324, 0x1c
	.globl gUnknown_8572340
gUnknown_8572340: @ 0x08572340
	.incbin "baserom.gba", 0x572340, 0x20
	.globl gUnknown_8572360
gUnknown_8572360: @ 0x08572360
	.incbin "baserom.gba", 0x572360, 0x18
	.globl gUnknown_8572378
gUnknown_8572378: @ 0x08572378
	.incbin "baserom.gba", 0x572378, 0xd0
	.globl gUnknown_8572448
gUnknown_8572448: @ 0x08572448
	.incbin "baserom.gba", 0x572448, 0x35c
	.globl gUnknown_85727A4
gUnknown_85727A4: @ 0x085727A4
	.incbin "baserom.gba", 0x5727a4, 0x50
	.globl gUnknown_85727F4
gUnknown_85727F4: @ 0x085727F4
	.incbin "baserom.gba", 0x5727f4, 0x18
	.globl gUnknown_857280C
gUnknown_857280C: @ 0x0857280C
	.incbin "baserom.gba", 0x57280c, 0x18
	.globl gUnknown_8572824
gUnknown_8572824: @ 0x08572824
	.incbin "baserom.gba", 0x572824, 0x178
	.globl gUnknown_857299C
gUnknown_857299C: @ 0x0857299C
	.incbin "baserom.gba", 0x57299c, 0x78
	.globl gUnknown_8572A14
gUnknown_8572A14: @ 0x08572A14
	.incbin "baserom.gba", 0x572a14, 0x528
	.globl gUnknown_8572F3C
gUnknown_8572F3C: @ 0x08572F3C
	.incbin "baserom.gba", 0x572f3c, 0x30
	.globl gUnknown_8572F6C
gUnknown_8572F6C: @ 0x08572F6C
	.incbin "baserom.gba", 0x572f6c, 0x60
	.globl gUnknown_8572FCC
gUnknown_8572FCC: @ 0x08572FCC
	.incbin "baserom.gba", 0x572fcc, 0x30
	.globl gUnknown_8572FFC
gUnknown_8572FFC: @ 0x08572FFC
	.incbin "baserom.gba", 0x572ffc, 0x2
	.globl gUnknown_8572FFE
gUnknown_8572FFE: @ 0x08572FFE
	.incbin "baserom.gba", 0x572ffe, 0x4
	.globl gUnknown_8573002
gUnknown_8573002: @ 0x08573002
	.incbin "baserom.gba", 0x573002, 0x6
	.globl gUnknown_8573008
gUnknown_8573008: @ 0x08573008
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide2
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide1
	.4byte BattleIntroSlide3
	.4byte BattleIntroSlide3
	.globl gUnknown_8573030
gUnknown_8573030: @ 0x08573030
	.4byte MachBikeTransition_FaceDirection
	.4byte MachBikeTransition_TurnDirection
	.4byte MachBikeTransition_TrySpeedUp
	.4byte MachBikeTransition_TrySlowDown
	.globl gUnknown_8573040
gUnknown_8573040: @ 0x08573040
	.4byte PlayerGoSpeed1
	.4byte PlayerGoSpeed2
	.4byte PlayerGoSpeed4
	.globl gUnknown_857304C
gUnknown_857304C: @ 0x0857304C
	.4byte AcroBikeTransition_TurnJump
	.4byte AcroBikeTransition_TurnDirection
	.4byte AcroBikeTransition_Moving
	.4byte AcroBikeTransition_NormalToWheelie
	.4byte AcroBikeTransition_WheelieToNormal
	.4byte AcroBikeTransition_WheelieIdle
	.4byte AcroBikeTransition_WheelieHoppingStanding
	.4byte AcroBikeTransition_WheelieHoppingMoving
	.4byte AcroBikeTransition_SideJump
	.4byte sub_0811A2E4
	.4byte AcroBikeTransition_WheelieMoving
	.4byte AcroBikeTransition_WheelieRisingMoving
	.4byte AcroBikeTransition_WheelieLoweringMoving
	.globl gUnknown_8573080
gUnknown_8573080: @ 0x08573080
	.4byte AcroBikeHandleInputNormal
	.4byte AcroBikeHandleInputTurning
	.4byte AcroBikeHandleInputWheelieStanding
	.4byte AcroBikeHandleInputBunnyHop
	.4byte AcroBikeHandleInputWheelieMoving
	.4byte AcroBikeHandleInputSidewaysJump
	.4byte AcroBikeHandleInputTurnJump
	.globl gUnknown_857309C
gUnknown_857309C: @ 0x0857309C
	.incbin "baserom.gba", 0x57309c, 0x8
	.globl gUnknown_85730A4
gUnknown_85730A4: @ 0x085730A4
	.incbin "baserom.gba", 0x5730a4, 0x70
	.globl gUnknown_8573114
gUnknown_8573114: @ 0x08573114
	@ Resolved pointer table; original ROM range 0x573114..0x573133.
	.4byte ABILITY_LEVITATE
	.4byte DoQuizAnswerEasyChatScreen
	.4byte MAP_NUM_ROUTE110
	.4byte DoQuizQuestionEasyChatScreen
	.4byte MAP_NUM_ROUTE113
	.4byte DoQuizSetAnswerEasyChatScreen
	.4byte PSR_UND_MODE
	.4byte DoQuizSetQuestionEasyChatScreen
	.globl gUnknown_8573134
gUnknown_8573134: @ 0x08573134
	.incbin "baserom.gba", 0x573134, 0x1f8
	.globl gUnknown_857332C
gUnknown_857332C: @ 0x0857332C
	.incbin "baserom.gba", 0x57332c, 0x8
	.globl gUnknown_8573334
gUnknown_8573334: @ 0x08573334
	.incbin "baserom.gba", 0x573334, 0x8
	.globl gUnknown_857333C
gUnknown_857333C: @ 0x0857333C
	.incbin "baserom.gba", 0x57333c, 0xb28
	.globl gUnknown_8573E64
gUnknown_8573E64: @ 0x08573E64
	.incbin "baserom.gba", 0x573e64, 0x20
	.globl gUnknown_8573E84
gUnknown_8573E84: @ 0x08573E84
	.incbin "baserom.gba", 0x573e84, 0x260
	.globl gUnknown_85740E4
gUnknown_85740E4: @ 0x085740E4
	.incbin "baserom.gba", 0x5740e4, 0x158
	.globl gUnknown_857423C
gUnknown_857423C: @ 0x0857423C
	.incbin "baserom.gba", 0x57423c, 0x20
	.globl gUnknown_857425C
gUnknown_857425C: @ 0x0857425C
	.incbin "baserom.gba", 0x57425c, 0x20
	.globl gUnknown_857427C
gUnknown_857427C: @ 0x0857427C
	.incbin "baserom.gba", 0x57427c, 0xc8
	.globl gUnknown_8574344
gUnknown_8574344: @ 0x08574344
	.incbin "baserom.gba", 0x574344, 0x8
	.globl gUnknown_857434C
gUnknown_857434C: @ 0x0857434C
	.incbin "baserom.gba", 0x57434c, 0xc
	.globl gUnknown_8574358
gUnknown_8574358: @ 0x08574358
	.incbin "baserom.gba", 0x574358, 0x24
	.globl gUnknown_857437C
gUnknown_857437C: @ 0x0857437C
	.incbin "baserom.gba", 0x57437c, 0x10
	.globl gUnknown_857438C
gUnknown_857438C: @ 0x0857438C
	.incbin "baserom.gba", 0x57438c, 0x20
	.globl gUnknown_85743AC
gUnknown_85743AC: @ 0x085743AC
	.incbin "baserom.gba", 0x5743ac, 0x8
	.globl gUnknown_85743B4
gUnknown_85743B4: @ 0x085743B4
	.incbin "baserom.gba", 0x5743b4, 0x8
	.globl gUnknown_85743BC
gUnknown_85743BC: @ 0x085743BC
	.incbin "baserom.gba", 0x5743bc, 0x10
	.globl gUnknown_85743CC
gUnknown_85743CC: @ 0x085743CC
	.incbin "baserom.gba", 0x5743cc, 0x20
	.globl gUnknown_85743EC
gUnknown_85743EC: @ 0x085743EC
	.incbin "baserom.gba", 0x5743ec, 0x28
	.globl gUnknown_8574414
gUnknown_8574414: @ 0x08574414
	.incbin "baserom.gba", 0x574414, 0x28
	.globl gUnknown_857443C
gUnknown_857443C: @ 0x0857443C
	.incbin "baserom.gba", 0x57443c, 0x50
	.globl gUnknown_857448C
gUnknown_857448C: @ 0x0857448C
	.incbin "baserom.gba", 0x57448c, 0x68
	.globl gUnknown_85744F4
gUnknown_85744F4: @ 0x085744F4
	.incbin "baserom.gba", 0x5744f4, 0x20
	.globl gUnknown_8574514
gUnknown_8574514: @ 0x08574514
	.incbin "baserom.gba", 0x574514, 0x40
	.globl gUnknown_8574554
gUnknown_8574554: @ 0x08574554
	.incbin "baserom.gba", 0x574554, 0x18
	.globl gUnknown_857456C
gUnknown_857456C: @ 0x0857456C
	.incbin "baserom.gba", 0x57456c, 0x1ac

