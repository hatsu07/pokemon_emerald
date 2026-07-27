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
	.incbin "baserom.gba", 0x568af4, 0x10
	.globl gUnknown_8568B04
gUnknown_8568B04: @ 0x08568B04
	.incbin "baserom.gba", 0x568b04, 0x8
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
	.globl gUnknown_8568B40
gUnknown_8568B40: @ 0x08568B40
	.incbin "baserom.gba", 0x568b40, 0x3c
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
	.incbin "baserom.gba", 0x568bc8, 0x14
	.globl gUnknown_8568BDC
gUnknown_8568BDC: @ 0x08568BDC
	.incbin "baserom.gba", 0x568bdc, 0x14
	.globl gUnknown_8568BF0
gUnknown_8568BF0: @ 0x08568BF0
	.incbin "baserom.gba", 0x568bf0, 0xc
	.globl gUnknown_8568BFC
gUnknown_8568BFC: @ 0x08568BFC
	.incbin "baserom.gba", 0x568bfc, 0x20
	.globl gUnknown_8568C1C
gUnknown_8568C1C: @ 0x08568C1C
	.incbin "baserom.gba", 0x568c1c, 0x18
	.globl gUnknown_8568C34
gUnknown_8568C34: @ 0x08568C34
	.incbin "baserom.gba", 0x568c34, 0x14
	.globl gUnknown_8568C48
gUnknown_8568C48: @ 0x08568C48
	.incbin "baserom.gba", 0x568c48, 0x4
	.globl gUnknown_8568C4C
gUnknown_8568C4C: @ 0x08568C4C
	.incbin "baserom.gba", 0x568c4c, 0x30
	.globl gUnknown_8568C7C
gUnknown_8568C7C: @ 0x08568C7C
	.incbin "baserom.gba", 0x568c7c, 0x34
	.globl gUnknown_8568CB0
gUnknown_8568CB0: @ 0x08568CB0
	.incbin "baserom.gba", 0x568cb0, 0x24
	.globl gUnknown_8568CD4
gUnknown_8568CD4: @ 0x08568CD4
	.incbin "baserom.gba", 0x568cd4, 0x18
	.globl gUnknown_8568CEC
gUnknown_8568CEC: @ 0x08568CEC
	.incbin "baserom.gba", 0x568cec, 0x3c
	.globl gUnknown_8568D28
gUnknown_8568D28: @ 0x08568D28
	.incbin "baserom.gba", 0x568d28, 0x84
	.globl gUnknown_8568DAC
gUnknown_8568DAC: @ 0x08568DAC
	.incbin "baserom.gba", 0x568dac, 0x20
	.globl gUnknown_8568DCC
gUnknown_8568DCC: @ 0x08568DCC
	.incbin "baserom.gba", 0x568dcc, 0x18
	.globl gUnknown_8568DE4
gUnknown_8568DE4: @ 0x08568DE4
	.incbin "baserom.gba", 0x568de4, 0x4c
	.globl gUnknown_8568E30
gUnknown_8568E30: @ 0x08568E30
	.incbin "baserom.gba", 0x568e30, 0x10
	.globl gUnknown_8568E40
gUnknown_8568E40: @ 0x08568E40
	.incbin "baserom.gba", 0x568e40, 0x1c
	.globl gUnknown_8568E5C
gUnknown_8568E5C: @ 0x08568E5C
	.incbin "baserom.gba", 0x568e5c, 0x8
	.globl gUnknown_8568E64
gUnknown_8568E64: @ 0x08568E64
	.incbin "baserom.gba", 0x568e64, 0xc
	.globl gUnknown_8568E70
gUnknown_8568E70: @ 0x08568E70
	.incbin "baserom.gba", 0x568e70, 0x2c
	.globl gUnknown_8568E9C
gUnknown_8568E9C: @ 0x08568E9C
	.incbin "baserom.gba", 0x568e9c, 0x1c
	.globl gUnknown_8568EB8
gUnknown_8568EB8: @ 0x08568EB8
	.incbin "baserom.gba", 0x568eb8, 0xc
	.globl gUnknown_8568EC4
gUnknown_8568EC4: @ 0x08568EC4
	.incbin "baserom.gba", 0x568ec4, 0x10
	.globl gUnknown_8568ED4
gUnknown_8568ED4: @ 0x08568ED4
	.incbin "baserom.gba", 0x568ed4, 0x34
	.globl gUnknown_8568F08
gUnknown_8568F08: @ 0x08568F08
	.incbin "baserom.gba", 0x568f08, 0x38
	.globl gUnknown_8568F40
gUnknown_8568F40: @ 0x08568F40
	.incbin "baserom.gba", 0x568f40, 0x4
	.globl gUnknown_8568F44
gUnknown_8568F44: @ 0x08568F44
	.incbin "baserom.gba", 0x568f44, 0x1c
	.globl gUnknown_8568F60
gUnknown_8568F60: @ 0x08568F60
	.incbin "baserom.gba", 0x568f60, 0x30
	.globl gUnknown_8568F90
gUnknown_8568F90: @ 0x08568F90
	.incbin "baserom.gba", 0x568f90, 0x40
	.globl gUnknown_8568FD0
gUnknown_8568FD0: @ 0x08568FD0
	.incbin "baserom.gba", 0x568fd0, 0x4c
	.globl gUnknown_856901C
gUnknown_856901C: @ 0x0856901C
	.incbin "baserom.gba", 0x56901c, 0x24
	.globl gUnknown_8569040
gUnknown_8569040: @ 0x08569040
	.incbin "baserom.gba", 0x569040, 0xac
	.globl gUnknown_85690EC
gUnknown_85690EC: @ 0x085690EC
	.incbin "baserom.gba", 0x5690ec, 0x2c
	.globl gUnknown_8569118
gUnknown_8569118: @ 0x08569118
	.incbin "baserom.gba", 0x569118, 0x24
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
	.incbin "baserom.gba", 0x56dcbc, 0xc
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
	.incbin "baserom.gba", 0x573008, 0x28
	.globl gUnknown_8573030
gUnknown_8573030: @ 0x08573030
	.incbin "baserom.gba", 0x573030, 0x10
	.globl gUnknown_8573040
gUnknown_8573040: @ 0x08573040
	.incbin "baserom.gba", 0x573040, 0xc
	.globl gUnknown_857304C
gUnknown_857304C: @ 0x0857304C
	.incbin "baserom.gba", 0x57304c, 0x34
	.globl gUnknown_8573080
gUnknown_8573080: @ 0x08573080
	.incbin "baserom.gba", 0x573080, 0x1c
	.globl gUnknown_857309C
gUnknown_857309C: @ 0x0857309C
	.incbin "baserom.gba", 0x57309c, 0x8
	.globl gUnknown_85730A4
gUnknown_85730A4: @ 0x085730A4
	.incbin "baserom.gba", 0x5730a4, 0x70
	.globl gUnknown_8573114
gUnknown_8573114: @ 0x08573114
	.incbin "baserom.gba", 0x573114, 0x20
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

