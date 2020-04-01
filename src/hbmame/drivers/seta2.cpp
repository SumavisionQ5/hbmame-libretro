// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/seta2.cpp"

 /****************************************************
         Proyecto Shadows Mame Build Plus
*****************************************************/

 /*********
 Guardians
************/

ROM_START( grdianss01 ) //grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s01.u2", 0x000000, 0x080000, CRC(90b1aa01) SHA1(c837230f1a14f6097ad3474dad5fb18d18f4a917) )
	ROM_LOAD16_BYTE( "s01.u3", 0x000001, 0x080000, CRC(dbaabf39) SHA1(45e483675883512e5dd3a3baf8b867da77a96eb3) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss02 ) //grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s02.u2", 0x000000, 0x080000, CRC(9ad3bcde) SHA1(677125dd4a9c8b7324ab2a9d0cfef9c6990fbcf1) )
	ROM_LOAD16_BYTE( "s02.u3", 0x000001, 0x080000, CRC(96c804e1) SHA1(023c51ccbe74da1c892252c14369215587315e52) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss03 )
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s03.u2", 0x000000, 0x080000, CRC(d0424f67) SHA1(5f019365c74b83230be37023ab0637a7a1cb410c) )
	ROM_LOAD16_BYTE( "s03.u3", 0x000001, 0x080000, CRC(6eb7501e) SHA1(8dabc28d9c260c765c088d8e1d57ce3ada6a9c26) )
	ROM_LOAD16_BYTE( "s03.u4", 0x100000, 0x080000, CRC(a79c6c3a) SHA1(07045ceb12c9462a0ac09c1cbb049c1702d22a9e) )
	ROM_LOAD16_BYTE( "s03.u5", 0x100001, 0x080000, CRC(dcd32e22) SHA1(8ba85bf46efa1dd6b7434fa2b549b5f5b41611d8) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss04 )
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s04.u2", 0x000000, 0x080000, CRC(41f674c7) SHA1(a6d8b3812070ead3b612fc470b87b617f4642d83) )
	ROM_LOAD16_BYTE( "s04.u3", 0x000001, 0x080000, CRC(133c6b61) SHA1(6f1c62525a227578d6799b4757c4c52741e1ebe2) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss05 )
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s05.u2", 0x000000, 0x080000, CRC(964316ae) SHA1(25822572b949140c8ff3791c92b5015868a324ae) )
	ROM_LOAD16_BYTE( "s05.u3", 0x000001, 0x080000, CRC(25d2c68c) SHA1(a192ce399cf790ea611a6775c6c5174c2bad8d6f) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss06 )
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s06.u2", 0x000000, 0x080000, CRC(35ff6d9f) SHA1(3b1af0afde907361b85b8c857eb86a8be7a36619) )
	ROM_LOAD16_BYTE( "s06.u3", 0x000001, 0x080000, CRC(6f758751) SHA1(20c6690765e48ef33bf44a839c2cbe04ed77278f) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss07 )  // grdianslbs, grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s07.u2", 0x000000, 0x080000, CRC(fb243872) SHA1(cb9c44c17c2d03c100839dd4b40291bbf9d28a5c) )
	ROM_LOAD16_BYTE( "s07.u3", 0x000001, 0x080000, CRC(a375123e) SHA1(c84faad4cc9efabede0ef9673eeb5f076836005d) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss08 ) //grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s08.u2", 0x000000, 0x080000, CRC(d051ba40) SHA1(4ff8ba85ca552aef0b8c7e00b54de1f55b8fc7cf) )
	ROM_LOAD16_BYTE( "s08.u3", 0x000001, 0x080000, CRC(73f806a1) SHA1(2ecc6ac4945a9a74527038404bf1b7cba8f99810) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss09 )
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s09.u2", 0x000000, 0x080000, CRC(aedb91fb) SHA1(e7280550084bf4dac2be4c3fa18635689e414b63) )
	ROM_LOAD16_BYTE( "s09.u3", 0x000001, 0x080000, CRC(e29de57a) SHA1(5fdd367d41e5bbab131eb7033b7bf1246018df7d) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss10 ) //grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s10.u2", 0x000000, 0x080000, CRC(8f0ccf93) SHA1(3f7ad4630faecde9138609d43b9126a0af15cd84) )
	ROM_LOAD16_BYTE( "s10.u3", 0x000001, 0x080000, CRC(2ae2ac73) SHA1(8c899c6c3e6931ead61f2c62873e9cc77a6fed93) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss11 ) //grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s11.u2", 0x000000, 0x080000, CRC(1bff5d6a) SHA1(79c30d5b334bb306a83c0e33688a80d17617bbde) )
	ROM_LOAD16_BYTE( "s11.u3", 0x000001, 0x080000, CRC(bb7cba06) SHA1(8ecdc466201197a5ba76ac284ac3d027c6757c8a) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss12 )
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s12.u2", 0x000000, 0x080000, CRC(165f5af4) SHA1(64991100f9c06c0b0e703f4937f135149df0c5d1) )
	ROM_LOAD16_BYTE( "s12.u3", 0x000001, 0x080000, CRC(7256af2c) SHA1(ed2e2dff814f13cdc306bf9bd3820970a9ec7268) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss13 )
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s13.u2", 0x000000, 0x080000, CRC(6a2baf4d) SHA1(81d2f76a2c40b0cfd94268a55c2d33ca2a8c18e8) )
	ROM_LOAD16_BYTE( "s13.u3", 0x000001, 0x080000, CRC(d945583e) SHA1(3ea74d71e0164c3b6ac0a82595ba7e8d3a4b223f) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

ROM_START( grdianss14 ) //grdiansy
	ROM_REGION( 0x200000, "maincpu", 0 )   
	ROM_LOAD16_BYTE( "s14.u2", 0x000000, 0x080000, CRC(0627fba3) SHA1(ea628e033e0358cceeeb98f45858dbd1ca797bb8) )
	ROM_LOAD16_BYTE( "s14.u3", 0x000001, 0x080000, CRC(1c9c4369) SHA1(f61924bed8cede8418fc03a4267db4fb0eaf4d3d) )
	ROM_LOAD16_BYTE( "u4.bin", 0x100000, 0x080000, CRC(bb52447b) SHA1(61433f683210ab2bc2cf1cc4b5b7a39cc5b6493d) )
	ROM_LOAD16_BYTE( "u5.bin", 0x100001, 0x080000, CRC(9c164a3b) SHA1(6d688c7af9e7e8e8d54b2e4dfbf41f59c79242eb) )

	ROM_REGION( 0x2000000, "sprites", ROMREGION_ERASE)  
	ROM_LOAD64_WORD( "u16.bin",  0x0000000, 0x400000, CRC(6a65f265) SHA1(6cad11f718f8bbcff464d41eb4717460769237ed) )
	ROM_LOAD64_WORD( "u15.bin",  0x0000002, 0x400000, CRC(01672dcd) SHA1(f61f60e3343cc5b6ccee391ee529966a141566db) )
	ROM_LOAD64_WORD( "u18.bin",  0x0000004, 0x400000, CRC(967babf4) SHA1(42a6311576417c44aeaceb8ba6bb3cd7794e4882) )
	ROM_LOAD64_WORD( "u17.bin",  0x0000006, 0x400000, CRC(0fad0629) SHA1(1bdc8e7c5e39e83d327f14a672ec81b049112da6) )
	ROM_LOAD64_WORD( "u20.bin",  0x1800000, 0x200000, CRC(a7226ab7) SHA1(408580dd35c568ffef1ebbd87359e3ec1f867020) )
	ROM_CONTINUE(                0x1000000, 0x200000 )
	ROM_LOAD64_WORD( "u19.bin",  0x1800002, 0x200000, CRC(c0c998a0) SHA1(498fb1877527ed37412537f06a2c39ff0c60f146) )
	ROM_CONTINUE(                0x1000002, 0x200000 )
	ROM_LOAD64_WORD( "u22.bin",  0x1800004, 0x200000, CRC(6239997a) SHA1(87b6d6f30f152f625f82fd858c1290176c7e156e) )
	ROM_CONTINUE(                0x1000004, 0x200000 )
	ROM_LOAD64_WORD( "u21.bin",  0x1800006, 0x200000, CRC(6f95e466) SHA1(28482fad16a3ac9302f152d81552e6f84a44f3e4) )
	ROM_CONTINUE(                0x1000006, 0x200000 )

	ROM_REGION( 0x100000, "x1snd", 0 )
	ROM_LOAD( "u32.bin", 0x000000, 0x100000, CRC(cf0f3017) SHA1(8376d3a674f71aec72f52c72758fbc53d9feb1a1) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Guardians
GAME( 2018, grdianss01,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Warriors Edition 2018-05-05)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2018, grdianss02,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Warriors Edition 2018-06-06)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 1995, grdianss03,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hooooook", "Guardians (Blood Blue Initial Lengthening)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 1995, grdianss04,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "KrysoFun", "Guardians (Super Version V1)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2010, grdianss05,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "Ivex", "Guardians (Super Version V2 2010-07-12)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2010, grdianss06,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "Ivex", "Guardians (Super Version V3 2010-07-13)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2019, grdianss07,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "BinDi", "Guardians (Robust Version 2019-01-11)", MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2018, grdianss08,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Warriors Edition 2018-12-10)",  MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2018, grdianss09,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Plus 2018-07-26)",  MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2019, grdianss10,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Warriors Edition 2019-04-15)",  MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2019, grdianss11,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Warriors Edition 2019-09-16)",  MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2019, grdianss12,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Robust Super Edition 2019-07-25)",  MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2019, grdianss13,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Kerron Edition 2019-08-17)",  MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )
GAME( 2020, grdianss14,   grdians,        grdians,  grdians,  seta2_state,    empty_init,    ROT0,   "hack", "Guardians (Warriors Edition 2020-02-15)",  MACHINE_NO_COCKTAIL | MACHINE_IMPERFECT_GRAPHICS )

